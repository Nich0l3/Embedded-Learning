/*
 *	Write a program to calculate and print distance from A to C 
 *
 *	1. Create vars to hold intermediate distance values i.e. A to B and B to C
 *	2. COmpute the sum of the data
 *	3. Store the result
 *	4. Print the result
 */


#include <stdio.h>

int main(){
	
	unsigned char distanceA2B = 160; // Unsigned -> distance is positive, char -> small values
	unsigned char distanceB2C = 40;

	unsigned char distanceA2C;

	distanceA2C = distanceA2B + distanceB2C;

	printf("The distance from A2C: %d Km\n",distanceA2C); // printing values in interger format
					     // here unsigned integer can also be used
	

	printf("The distance from A2C: %X Km\n",distanceA2C); // printing values in hex format	
	printf("The distance from A2C: %x Km\n",distanceA2C); 
	
	printf("The distance from A2C: %o Km\n",distanceA2C); // printing values in octal format

	printf("The distance from A2C: %c Km\n",distanceA2C); // printing values in char format
}
