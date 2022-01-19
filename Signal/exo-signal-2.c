#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>

void signal_handler(int num)
{
	fprintf(stdout, "\n%ld received signal: %d (%s)\n", 
	        (long) getpid(), num, sys_siglist[num]);
}

int main (void)
{
	printf("\033[H\033[2J"); 
	int i;

	for (i = 1; i < NSIG; i ++){
		if (signal(i, signal_handler) == SIG_ERR)
		{
			fprintf(stderr, "Signal %d not handled\n", i);
		}else{
			raise(i);
		}
	}
return 0;

}