#include <stdio.h>

int main(){

	long long myLongHistory = 900;

	char size = sizeof(myLongHistory);
	
	// sizeof()  return an unsigned long operator

	printf("sise of char data type = %ld\n", sizeof(char));
	printf("sise of short data type = %ld\n", sizeof(short));
	printf("sise of int data type = %ld\n", sizeof(int));
	printf("sise of long data type = %ld\n", sizeof(long));
	printf("sise of long long variable = %ld\n", sizeof(long long));

	return 0;

}
