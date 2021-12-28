#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void main()
{
 char *cmd[] = {"who", "ls", "date","pwd"};
 int i;
 while( 1 )
 {
    printf("\n===================\n");
    printf( "0=who\n1=ls\n2=date\n3=pwd\n4=Quitter\n" );
    printf("\n===================\n");
    printf("Votre Reponse : ");
    scanf( "%d", &i );
    if(i == 4) exit(0);
    if(fork() == 0)
    { 
	execlp( cmd[i], cmd[i], (char *)0 );
	printf( "execlp failed\n" );
	exit(1);
    }
    else
    { 
	wait( (int *)0 );
	printf( "child finished\n" );
    }
  } 
} 
