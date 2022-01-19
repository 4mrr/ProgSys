#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>

int nsig[NSIG];

void handler(int);
int int main(void)
{
  int s;
  for (s i = 0; i < NSIG; s++)
  {
    if(signal(s,handler) == SIG_ERR)
      printf(stdout,"Je peux pas attraper signal no %d\n",s);
      nsig[s]=0;
  }
  while(1) pause();

}

void handler(int s)
{
  printf("Signal %d recu %d fois\n",s,++nsig[s]);
}