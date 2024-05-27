#include <stdio.h>

// prototype
void myFunc(void);

// Global variable
//int count = 0;
// Vulnerable variable is accessable by other files.


int main(){

	myFunc();
	myFunc();
	myFunc();
	myFunc();
	
	return 0;
}

void myFunc(void){
	static int count = 0; // scope - global, visibility - private
	count = count + 1;
	printf("Function executed: %d time(s)\n", count);
}
