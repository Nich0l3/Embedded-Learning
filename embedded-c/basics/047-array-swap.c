#include <stdint.h>
#include <stdio.h>

void user_input();
void swap(int32_t * const array1, int32_t size1, int32_t * const array2, int32_t size2);
void array_display(uint32_t const * const array, uint32_t size);

int main (){

	int32_t size1, size2;
	printf("Enter size of array-1 and array-2 : ");
	scanf("%d %d", &size1, &size2);
	
	if ((size1<0) || (size2<0)){
		printf("Negative length array is not legal\n");
		return -1;
	}

	int32_t array1[size1], array2[size2];

	for (uint32_t i1 = 0; i1 < size1; i1++){
		printf("Enter element %u of array1 = ", i1);
		scanf("%d",(array1+i1));
	}

	for (uint32_t i2 = 0; i2 < size2; i2++){
		printf("Enter element %u of array2 = ", i2);
		scanf("%d",&array2[i2]);
	}
	
	printf("Arrays before swap\n");
	printf("Array-1: ");
	array_display(array1, size1);
	printf("Array-2: ");
	array_display(array2, size2);

	swap(array1, size1, array2, size2);

	printf("Arrays after swap\n");
	printf("Array-1: ");
	array_display(array1, size1);
	printf("Array-2: ");
	array_display(array2, size2);

	user_input();
}

void swap(int32_t * const array1, int32_t size1, int32_t * const array2, int32_t size2){
	
	uint32_t swap_size = (size1 < size2) ? size1 : size2;

	for (uint32_t iswap = 0; iswap < swap_size; iswap++){
		
		int32_t store = *(array1 + iswap);
		*(array1 + iswap) = array2[iswap];
		array2[iswap] = store;	
	}
}

void user_input(){
	
	printf("Press return to exit...");
	while (getchar() != '\n');
	getchar();
}


void array_display(uint32_t const * const array, uint32_t size){
        for (uint32_t i = 0; i < size; i++){
                printf("%4d\t",array[i]);
        }
        printf("\n");
}

