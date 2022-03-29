#include <stdio.h>

int main() {
	int matrix[2][5] = {{1,2,3,4,5}, {6,7,8,9,10}};
	int (*pmatrix)[5] = matrix;
	printf("matrix[0][0] address: %p\n", *pmatrix);
	printf("matrix[1][0] address: %p\n", *(pmatrix + 1));
	printf("pmatrix address:  %p\n", &pmatrix);
	printf("matrix[0] address: %p\n", &matrix[0]);
	printf("matrix[1] address: %p\n", &matrix[1]);

}
