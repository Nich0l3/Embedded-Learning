#include <stdio.h>

// void add_func(int, int, int); // Uncomment the executing line to stop warnings

int main(){
	
	add_func(12,13,14);
	add_func(-20,20,14);

	int valA = 15, valB=20;
	add_func(valA, valB, 30);

	return 0;
}

void add_func(int a, int b, int c){
	printf("The result is : %d\n", a+b+c);
}
