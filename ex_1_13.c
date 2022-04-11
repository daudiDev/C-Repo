#include <stdio.h>

int main() {
	int c; //for holding the character input
	int prev; //for holding previous character
	while((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') { /* white space is not printed */
			if (prev != '\t' && prev != ' ') { /* make sure prev char is not a white space */
				printf("\n");
			}
		} else {
			printf("*");
		}
		prev = c;
	}
	return 0;
}
