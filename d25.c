/*#include<sys/shm.h>
#include<stdio.h>
int main()
{
	int shmid=shmget(IPC_PRIVATE,100,0666);
	printf("shmid is %d\n",shmid);
}
*/



/*
#include<sys/shm.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int shmid=shmget(IPC_PRIVATE,10*sizeof(int),0644);
	printf("shmid %d\n",shmid);
	int i;
	int pid=fork();
	if(pid==0)
	{
		int *p=shmat(shmid ,NULL,0);
		for(i=0;i<10;i++)
		{
			p[i]=i;
		}
		shmdt(p);
		exit(0);
	}
	else if(pid>0)
	{
		wait (NULL);
		int *p=shmat(shmid,NULL,0);
		for(i=0;i<10;i++)
			printf("%d\n",p[i]);
		shmdt(p);
	}
}*/

/*
#include<sys/msg.h>
#include<stdio.h>

struct msgbuf
{
	long mtype;
	char mtext[100];
};

int main()
{
	//struct msgbuf a={1,"hello world"};
	struct msgbuf b;
	int msgid=msgget(22222,0666|IPC_CREAT);
	//int msgid=msgget(22222,0666|IPC_CREAT);
	//msgsnd(msgid ,&a,sizeof(a)-sizeof(long),0);
	msgrcv(msgid,&b,sizeof(b)-sizeof(long),0,0);
	printf("msg type is %lu,buf is %s\n",b.mtype,b.mtext);
}
*/





/*
#include<stdio.h>
int main()
{
	int x=0x12345678;
	char *p=(char *)&x;
	printf("%p %x\n",p,*p);
	printf("%p %x\n",p+1,*(p+1));
	printf("%p %x\n",p+2,*(p+2));
	printf("%p %x\n",p+3,*(p+3));

}

*/



/*
#include<stdio.h>
union test_t
{
	int a;
	char c[4];
};
int main()
{
	union test_t x;
	x.a=0x12345678;
	if(x.c[0]==0x78)
	{
		printf("little endian\n");
	}
	else
	{
		printf("big endian \n");
	}
}*/



#include<stdio.h>
#include<arpa/inet.h>
int main()
{
	int ip=inet_addr("192.168.31.169");
	printf("%x\n",ip);
	ip=ntohl(ip);
	printf("%x\n",ip);
}
