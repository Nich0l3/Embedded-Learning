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
	struct carModel const carBMW = {2100,15000,220,1330}; // C89 method, order is important
							
	struct carModel carFord = {.carWeight = 90.90, .carPrice = 15000, .carMaxSpeed = 220, .carNumber = 2021};	// C99 method 


	printf("Details of BMW car is as follows\n");
	printf("carNumber = %u\n", carBMW.carNumber);
	printf("carPrice = %u\n", carBMW.carPrice);
	printf("carMaxSpeed = %u\n", carBMW.carMaxSpeed);
	printf("carWeight = %f\n", carBMW.carWeight);
	

	carFord.carNumber = 1000; // updating struct element
	printf("Details of Ford car is as follows\n");
	printf("carNumber = %u\n", carFord.carNumber);
	printf("carPrice = %u\n", carFord.carPrice);
	printf("carMaxSpeed = %u\n", carFord.carMaxSpeed);
	printf("carWeight = %f\n", carFord.carWeight);
	
	return 0;
}
