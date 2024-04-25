#include<stdio.h>

int main(){

	char ch = 100;
	printf("Value of data  = %d\n",ch);
	printf("Address of pointer variable = %p\n",&ch);

	char* pAddress = (char *) &ch;

	char data = *pAddress;

	printf("Real value = %d\n",data);

	*pAddress = 65;
	printf("Value of data = %d\n",ch);
}
