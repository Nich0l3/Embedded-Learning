#include <stdio.h>
#include <stdint.h>

union Address{
	uint16_t shortAddr;
	uint32_t longAddr;
};

int main(void){
	union Address addr;

	addr.shortAddr = 0xABCD;
	addr.longAddr = 0xEEEECCCC;

	printf("short addr\t= %#X\n",addr.shortAddr);
	printf("long addr\t= %#X\n",addr.longAddr);

	getchar();

	return 0;
}
