#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(int argc, char * argv[]){	
	uint8_t const data = 10;
	printf("Value = %"PRIu8"\n",data);

	uint8_t * ptr = (uint8_t*)&data; // default - uint8_t const *

	*ptr = 50; 
	printf("Value = %"PRIu8"\n",data);
		
	return 0;
}

