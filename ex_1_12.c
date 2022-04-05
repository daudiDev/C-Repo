#include <stdio.h>

/* this is a program that prints a word per line */ 


int main() {
	//get the input
	int c;
	int prev;
	while((c = getchar()) != EOF) { 
		
		//do not double print spaces, newlines, or tabs
		if (c == ' ' || c == '\t') {
			printf("%c", c);
			if (prev != ' ' && prev != '\t') {
				printf("\n");
				prev = c;
			}
	
		} else {
			//print character in the word
			putchar(c);
			prev = c;		
		}
	}

	return 0;
}
