#include<stdio.h>
int main(int argc,char **argv)
{
	int sfd;
	sfd=socket(AF_INET,SOCK_STREAM,0)
	struct sockaddr_in saddr;
	int slen=sizeof(saddr);
	saddr.sin_family=AF_INET;
	saddr.sin_port=htons(atoi(argv[1]));
	saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
	
	bind(sfd,(const struct sockaddr *)&saddr,slen);
	printf("binding completed");

	listen(sfd,1);
	printf("listening completed");

	int cfd;
	struct sockaddr_in caddr;
	int clen=sizeof(caddr);
	cfd=accept(sfd,(struct sockaddr *)&caddr,&clen);

	char buff[100];
	int status=recv(cfd,buff,100,0);
	if(status<0)
	{
		perror("recv");
	}
		else
	{
		printf("server received:%s",buff);
		send(cfd,buff,100,0);
		close(cfd);
		close(sfd);
	}
}




