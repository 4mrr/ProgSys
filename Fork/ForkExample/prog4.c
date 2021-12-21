#include<unistd.h>
#include<stdio.h>

int main()
{
   if(fork())
   {
        printf("=========================I am the first Process Child===============================\n");
        printf("My PID is : %d \n",getpid());
    	fork() && ( fork() || ( fork() && fork() ));
    	printf("Hello child\n");
   }else
   {
        printf("*************I am the first Process Parent with PID : %d *****************>\n", getpid());
   	printf("My PID is :%d \n",getpid());
   	fork();
   	printf("Hello parent\n");
   	sleep(1);
   	return 0;
   }

}
