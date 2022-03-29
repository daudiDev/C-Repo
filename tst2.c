
#include <stdio.h>

int main() {
	int num;
	int *pi = &num;
	printf("Value of pi: %p\n", pi);
	printf("Size of pi: %ld\n", sizeof(pi));
	void *pv = pi;
	printf("Size of pv: %ld\n", sizeof((void*)pv));	
	return 0;
}
