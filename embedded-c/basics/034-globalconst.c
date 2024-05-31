#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

// Global const - data is stpres in data segment, .rodata (read-only data)
// Local const - data is stored in stack memory along with other local variable and function params

uint8_t const data = 10;

int main(int argc, char * argv[]){	
	printf("Value = %"PRIu8"\n",data);

	uint8_t * ptr = (uint8_t*)&data; // default - uint8_t const *

	*ptr = 50; 
	printf("Value = %"PRIu8"\n",data);
		
	return 0;
}

