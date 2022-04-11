#include <stdio.h>

int main() {
	int count_a = 0;
	int count_e = 0;
	int count_r = 0;
	int count_i = 0;
	int count   = 0;
	int c;

	while ((c = getchar()) != EOF) {
		if (c != ' ' && c != '\t') {
			if (c == 'a') {
				count_a++;	
			} else if (c == 'e') {
				count_e++;
			} else if (c == 'r') {
				count_r++;
			} else if (c == 'i') {
				count_i++;
			} else {
				count++;
			}
		} 
		if (c == '\n') {
			for (int i = 0; i < count_a; i++) {
				printf("*");
			}
			printf("\n");
			for (int i = 0; i < count_e; i++) {
				printf("*");
			}			
			printf("\n");
			for (int i = 0; i < count_r; i++) {
				printf("*");
			}
			printf("\n");
			for (int i = 0; i < count_i; i++) {
				printf("*");
			}	
			printf("\n");		
			for (int i = 0; i < count; i++) {
				printf("*");
			}
			printf("\n");

		}
	
	}


	return 0;

}
