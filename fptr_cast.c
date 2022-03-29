#include <stdio.h>


//NOTE: this program is missing the definition of the add function

int main() {
	typedef int (*fptrToSingleInt)(int);
	typedef int (*fptrToTwoInts)(int,int);
	int add(int,int);

	fptrToTwoInts fptrFirst = add;
	fptrToSingleInt fptrSecond = (fptrToSingleInt)fptrFirst;
	fptrFirst = (fptrToTwoInts)fptrSecond;
	printf("%d\n", fptrFirst(5,6));
}
