#include<stdio.h>
#include<stdint.h>


void smooth_exit(void);
int8_t user_choice(void);

float circle(void);
float triangle(void);
float rectangle(void);
float square(void);
float trapezoid(void);

int main(void){

	int8_t choice = user_choice();
	float answer = 0;

	switch (choice){
		
		case 'c':	// case will automatically take the integer value of the ASCII values
			answer = circle();
			break;

		case 't':
			answer = triangle();
			break;

		case 'r':
			answer = rectangle();
			break;
	
		case 's':
			answer = square();
			break;

		case 'z':
			answer = trapezoid();
			break;

		default:
			printf("Invalid input\n");
			smooth_exit();
			return -1;
	}

	if (answer > 0)
	printf("Result = %.2f\n",answer);

	smooth_exit();
}


void smooth_exit(void){	
	printf("Press return to exit\n");
	while(!getchar() == '\n');
	getchar();
}


int8_t user_choice(void){
	
	int8_t ret;
	printf("Area calculation program : \n Circle --> c\n Triangle --> t\n Rectangle --> r\n Square --> s\n Trapezoid --> z\n\nEnter choice: ");
	scanf("%c",&ret);

	return ret;
}


// Area function definition
float circle(void){
	float radius;
	printf("Enter radius : ");
	scanf("%f",&radius); 	// hh indicates that the argument is an (un)signed char.
				// hhu is used when you want to read an unsigned integer of size 1 byte (8 bits) from the input.

	if (radius < 0) {
		printf("Radius cannot be less then zero\n");
		smooth_exit();
		return -1;
	}
	else return (3.14 * radius * radius);
}


float rectangle(void)
{
	float length1, length2;
	
	printf("Enter length x breadth : ");
	scanf("%f %f",&length1, &length2);

	if (length1 < 0 || length2 < 0){
                printf("Lengths cannot be less then zero\n");
                smooth_exit(); 
                return -1;
	} else return length1 * length2;
}

float square (void){

	float side;
	printf("Enter side : ");
	scanf("%f",&side);

	if (side < 0){
                printf("Lengths cannot be less then zero\n");
                smooth_exit();
                return -1;		
	} else return side*side;
}

float triangle(void){
	float height, base;
	printf("Enter height x base : ");
	scanf("%f %f", &height, &base);

	if (height < 0 || base < 0){
                printf("Lengths cannot be less then zero\n");
                smooth_exit();
                return -1;
	}
	else return (height * base * 0.5);
}

float trapezoid (void){

	float u_base, l_base, height;
	printf("Enter upper base x lower base x height : ");
	scanf("%f %f %f",&u_base, &l_base, &height);

	if (u_base < 0 || l_base < 0 || height < 0)
	{
                printf("Lengths cannot be less then zero\n");
                smooth_exit();
                return -1;
	}
	return (u_base + l_base)*0.5 *height;
}
