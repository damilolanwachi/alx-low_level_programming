#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main print if the integer positive, negative or zero
 */

int main (void)
{
	int n;
       	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n",n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n",n);
	}
	else if{
		printf("%i is negative\n",n);
	}
	return 0;
}

