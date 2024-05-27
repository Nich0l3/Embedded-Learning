#include <stdio.h> // std library header file

#include "012-math.h" // user defined header file

int main(){
	
	int valA = 0x0FFF1111 , valB = 0x0FFF1111;
	

	printf("Sum = %X\n", add_f(valA,valB));	
	printf("Diff = %X\n", sub_f(valA,valB));
	printf("Prod = %llx\n", mul_f(valA,valB)); // will result in data loss as 
				// int*int = int -> long long int
				// Atleast one number should be typecasted to long long int.
				// long long int * int = long long int 		   

	printf("Ratio = %f\n", div_f(100,8)); // typecast one var to float

	return 0;
}
