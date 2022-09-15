#include <stdio.h>

int main () {
	int n = rand();
	if (n > 0){
		printf("is positive");
	}
	if (n == 0){
		printf("is zero");
	}
	else{
		printf("is negative"\n);
	}
	return 0;
}

