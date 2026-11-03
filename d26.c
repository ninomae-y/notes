/*#include<sys/socket.h>
#include<stdio.h>
int main()
{
	int sockfd=socket(AF_INET,SOCK_DGRAM,0);
	printf("sockfd is %d\n",sockfd);
}

*/

/*
#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
int main()
{
	int sockfd=socket(AF_INET,SOCK_DGRAM,0);
	printf("sockfd is %d\n",sockfd);
	struct sockaddr_in myaddr;
	myaddr.sin_family=AF_INET;
	myaddr.sin_port=htons(8888);
	myaddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	int ret=bind(sockfd,(struct sockaddr *)&myaddr,sizeof(struct sockaddr));
	printf("ret is %d\n",ret);
}

*/



/*
#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
int main()
{
	char buf[100] = { 0 };
	struct sockaddr_in youaddr;
	int len = sizeof(youaddr);
	int fd = socket(AF_INET, SOCK_DGRAM, 0); //创建socket指定 SOCK_DGRAM
	struct sockaddr_in myaddr;
	myaddr.sin_family = AF_INET;
	myaddr.sin_port = htons(8888);
	myaddr.sin_addr.s_addr = inet_addr("127.0.0.1"); //127.0.0.1 环回地址
	int ret = bind(fd, (struct sockaddr *)&myaddr, sizeof(myaddr));
	printf("ret is %d\n", ret);
	recvfrom(fd, buf, sizeof(buf), 0, (struct sockaddr *)&youaddr, &len);
	printf("recv is %s\n", buf);
}*/


#include<stdio.h>
#include<sys/socket.h>
#include<netinet/in.h>
int main()
{
	char buf[]="hello";
	int fd=socket(AF_INET,SOCK_DGRAM,0);
	struct sockaddr_in youraddr;
	youraddr.sin_family=AF_INET;
	youraddr.sin_port=htons(8888);
	youraddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	sendto(fd,buf,sizeof(buf),0,(struct sockaddr *)&youraddr,sizeof(youraddr));
	close(fd);
}
