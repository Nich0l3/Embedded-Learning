#include<stdio.h>

void vul_func(void);

//int private_data;        // variable is visible to corresponding linked files
static int private_data;   // variables is visible to only main.c

int main(){
	
	private_data = 100;

	printf("private data = %d\n",private_data);

	vul_func();

	printf("private data = %d\n",private_data);
}
