#include <stdio.h>

// 'extern' keyword tells the compiler that, this variable is defined outside the scope of this file.

extern int myExamScore; // declaration

int main(){
	
	myExamScore = 540;
	printf("Hello world \n");
	printf("Score : %d\n", myExamScore);	

	return 0;
}
