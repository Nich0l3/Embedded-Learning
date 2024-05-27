#include<stdio.h>

long long int g_data = 0xfffeabcd11112345;

int main(void){

	printf("Original data : %llx\n",g_data);

	int * pAddress = (int*)&g_data;

	printf("Value of pAddress %p\n",pAddress);
	printf("Value of address %p is %x\n",pAddress,*pAddress);

	pAddress++; // increment in the address depends upon the type of pointer

	printf("Value of pAddress %p\n",pAddress);
	printf("Value of address %p is %x\n",pAddress,*pAddress);

	return 0;
}
