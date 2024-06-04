#include <stdint.h>
#include <stdio.h>

void array_display(uint32_t const * const array, uint32_t size);

int main(){

	uint32_t data[10];
	uint32_t size = sizeof(data)/sizeof(uint32_t);

	for (uint32_t i = 0; i < size; i++){
		*(data + i) = i;
	}

	array_display(data, size);
	array_display((data + 2), size -2);
	array_display(&data[2], size-2);
}

void array_display(uint32_t const * const array, uint32_t size){
	for (uint32_t i = 0; i < size; i++){
		printf("%x\t",array[i]);
	}
	printf("\n");
}
