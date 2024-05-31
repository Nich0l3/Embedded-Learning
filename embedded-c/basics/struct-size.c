#include <stdio.h>
#include <stdint.h>

// It is better to make a separate header file for all struct definitions
struct carModel{
	
	uint32_t carNumber;
	uint32_t carPrice;
	uint16_t carMaxSpeed;
	float carWeight;
};

int main(void)
{
	struct carModel carBMW = {2100,15000,220,1330}; // theoritical - 14
	printf("size of struct carModel is %lu\n",sizeof(struct carModel)); // output - 16
							
	return 0;
}
