#include<stdio.h>
#include<memory.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
 int fd= open("tutu",O_WRONLY | O_CREAT);
 close(STDOUT_FILENO);
 dup(fd);
 close(fd);
 
 pribtf("tutu");
 return 0;
 
}
