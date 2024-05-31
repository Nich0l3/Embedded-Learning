#include <stdio.h>

int add_func(int, int, int); 

int main(){
	
	int retvalue = add_func(12,13,14);
	
	printf("Sum = %d\n",retvalue);
	return 0;
}

int add_func(int a, int b, int c){
	return a+b+c;
}
