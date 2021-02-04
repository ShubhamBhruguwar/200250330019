#include<stdio.h>
#include<stdlib.h>
struct packet
{
	int packet_no;
        int id;
        int time;
	int data;
};
int  thruster(void)
{
	printf("enter the packet_no");
	scanf("%d",&packet_no);
	printf("enter the id");
        scanf("%d",&id);
	printf("enter the time");
	scanf("%d",&time);
	printf("enter the random data bet 30 to 300");
	for(i=-100;i<100;i++);
	{
		data =rand()%100;
		printf("%d\n",data);
	}

}


