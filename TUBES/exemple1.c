#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#include <unistd.h>

int pip[2]; /* descripteur de pipe */

char buf [6];

int pere()
 {
  write(pip[1],"hello",5);
  return 0;
} 

int fils()
{
  read(pip[0],buf,5);
  printf("%s",buf);
  return 1;
}

int main()
{
 pipe(pip); 
 switch (fork())
{
 case -1: perror("fork"); exit(1);
 case 0: fils();
 default: pere();
}

}
