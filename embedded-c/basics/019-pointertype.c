#include <stdio.h>

long long g_data = 0xfffeabcd11112345;

int main(void){
	
	char* pAddress1;
	int* pAddress2;
	short * pAddress3;
	long long * pAddress4;

	pAddress1 = (char *) &g_data;
	pAddress2 = (int*)&g_data;
	pAddress3 = (short*)&g_data;
	pAddress4 = &g_data;

	printf("Value at address %p is : %x\n",pAddress1,*pAddress1);
	printf("Value at address %p is : %x\n",pAddress2,*pAddress2);
	printf("Value at address %p is : %x\n",pAddress3,*pAddress3);
	printf("Value at address %p is : %llx\n",pAddress4,*pAddress4);
}
