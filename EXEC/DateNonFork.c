#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>


int main (void)
{
     execl("/bin/date","date",(char *)0);
     return 0;
    
}

