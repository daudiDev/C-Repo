#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *name = (char*) malloc(strlen("Susan") + 1);
	strcpy(name, "Susan");
	printf("Address of name: %p\n", name);
	while(*name != 0) {
		printf("%c", *name);
		name++;
	}
	printf("\nAddress of name: %p\n", name);
	return 0;

}
