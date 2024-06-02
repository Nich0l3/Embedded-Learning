#include <stdio.h>
#include <stdint.h>

// It is better to make a separate header file for all struct definitions
struct carModel{

	uint8_t carNumber;
	uint32_t carPrice;
};

int main(void)
{
	struct carModel carBMW; // theoritical - 5
				// struct consume memory at variable declaration

	printf("size of struct carModel is %lu\n",sizeof(struct carModel)); // output - 8	
	return 0;
}
