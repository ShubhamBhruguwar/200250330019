#include<stdio.h>
#include"temperature_cs.c"
#include"thruster.c"
#include"acceleration.c"
#include"gyro_rocket.c"
int main()
{
	int fd;
	fd=socket(AF_INET,SOCK_STREAM,0);
	struct sockaddr_in addr;
	int len=sizeof(addr);
	addr.sin_family=AF_INET;
	addr.sin_PORT=htons(atoi(argv[1]));
	addr.sin_addr.s_addr=inet_addr(argv[2]);

	connect(fd,(const struct sockaddr *)&addr,len)
		char buff[100];
	gets(buff);
	if(send(fd,buff,100,0)<0)
	{
		peeror("send");
	}
	puts("send");
	memset(buff,0,100);
	status=recv(fd,buff,100,0);
	close(fd);
}
