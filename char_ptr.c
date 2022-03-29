#include <stdio.h>

int main() {
	char header[6] = "Sound";
	printf("%c\n", header[0]);
	char *header_ptr = header;
	printf("%s\n", header_ptr);

//the pointer to a char can be changed but not the array of characters.
	header_ptr = "Pound";
	printf("%s\n", header_ptr);


}
