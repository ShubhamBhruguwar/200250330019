#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	sem_mutex=semget(KEY_MUTEX,1,0);
	sem_empty=semget(KEY_EMPTY,1,0);
	sem_full=semget(KEY_FULL,1,0);

	srand(time(NULL));
	const int SIZE=size(buffer[BUFFER_SIZE]);
	shm_id=shmget(KEY_SHARED_MEMORY,SIZE,0);
	int i=0;
	buffer_item *adr;
	do
	{
		buffer_item consumed;
		p(sem_full);
		p(sem_mutex);

		int full_value=get_semVal(sem_full);
		adr=(buffer_item*)shmat(shm_id,NULL,0);

		for(i=0;i<BUFFER_SIZE;i++)
		{
			printf("%d %d %d %d",addr[i].buf[0],addr[i].buff[1],addr[i].buff[2],addr[i].buff[3]);
		}
		V(sem_mutex);
		v(sem_empty);

		i++;
	}
	while(i<LOOP);

	v(sem_full);
	sleep(1);
}

