#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

struct DataSet{
	char	data1;
	int 	data2;
	char  	data3;
	short 	data4;
};

int main(int argc, char * argv[]){
	
	struct DataSet data;

	data.data1 = 0x11;
	data.data2 = 0xFFFFEEEE;
	data.data3 = 0x22;
	data.data4 = 0xABCD;
	
	uint8_t *ptr; // char type pointer to read data in 1 byte order from memory
	ptr = (uint8_t*) &data; // struct DataSet *
	
	uint32_t totalSize = sizeof(struct DataSet); // total memory acquired 
						     // memory is parsed in 1 bytes data by the *ptr

	printf("Memory Address\tContent\n");

	for (uint32_t i = 0; i < totalSize; i++){
		printf("%p\t%X\n", ptr, *ptr);
		ptr++; // incrementing 1 bytes/8 bits in memory
	}

	printf("Total memory consumed by this variable = %I64u\n", sizeof(data));

	return 0;
}


