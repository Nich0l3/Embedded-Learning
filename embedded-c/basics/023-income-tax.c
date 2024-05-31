#include<stdio.h>
#include<stdint.h>

void smooth_exit(void);

int main(void){

	uint64_t income;
	double temp_income;				// taking integer part of real input (if any)
	printf("Enter income: ");
	if(!scanf("%lf",&temp_income)){
		printf("Invalid input !!!\n");
		smooth_exit();
	}
	if (temp_income < 0){
		printf("Income cannot be negative\n");
		smooth_exit();
		return -1;
	}
	income = (uint64_t)temp_income;

	uint64_t tax = 0;
	if (income > 9526 && income <= 38700){
		tax = income * 0;
	} else if (income > 38700 && income <= 82500){
		tax = income * 0.12;			// integer * double = double ( if float not mentioned)
	} else if (income > 82500){
		tax = income * 0.32;
		tax += 1000;
	}else{
		;	// NOP
	}

	printf("Your total payable tax: $%I64u \n",tax);

	smooth_exit();
	return 0;
}

void smooth_exit(void){	
	printf("Enter to exit application");
	while(getchar() != '\n');
	getchar();
}
