#include<stdio.h>

int main(){
	
	char a1 = 'A';
	char a2 = 'p';

	unsigned long int addr_a1 = (unsigned long int)&a1;
	unsigned long long int addr_a2 = (unsigned long long int)&a2;

	printf("Address of variable a1 is: %p\n", &a1);
	printf("Address of variable a2 is: %p\n", &a2);

	printf("Address of variable a1 is: %lx\n", addr_a1);
	printf("Address of variable a2 is: %llx\n", addr_a2);

/*
 * 	d - signed			long long type
 *	u - unsigned			MINGW - %I64X
 *	x - hexadecimal			linux - %llx
 *	
 */

	return 0;
}
