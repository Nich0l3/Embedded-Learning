#include <stdio.h>

void func(void);   //declaration of function from another program,
		   //need not to specify extern keyword.

int main(){
	printf("This is some temporary output\n");
	func();
	return 0;
}

static void critical_func(int val){
	printf("Changing user priviliged to admin for user - %d\n", val);
}
