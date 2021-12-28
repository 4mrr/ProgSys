#include <stdio.h>
#include <unistd.h>

void main()
{ 
 char *cmd[] = {"who", "ls", "date", "ps"};
 int i;
 printf("0=who\n1=ls\n2=date\n3=ps\n");
 printf("Votre Reponse :  "); 
 scanf("%d", &i);
 execlp( cmd[i], cmd[i], (char *)0 );
 printf( "execlp failed\n");
}
