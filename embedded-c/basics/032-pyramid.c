#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>//provides macros for specifying format strings in printf and scanf functions when dealing with fixed-width integer types.

void wait_for_user_input(void);
void pyramid(int32_t height);

int main(int argc, char * argv[]){
	
	// height input 
	int32_t height;
	printf("Enter height of pyramid : ");
	int8_t flag = scanf("%"SCNi32, &height);

/*
	printf("%"PRIi32 , height);
	printf("\n");
	printf("%"PRIi8 , flag);
	printf("\n");
*/
	if (!flag){
		printf("Format mismatch!!!\n");
		wait_for_user_input();
		return 1;
	}else if (height < 0){
		printf("Negative input is invalid\n");
		wait_for_user_input();
		return 2;
	}
	
	// pyramid
	pyramid(height);	
	
	wait_for_user_input();
	return 0;
}


void wait_for_user_input(void){
	printf("Press enter to exit this application");
	while(getchar()!= '\n');
	getchar(); 
}
		

void pyramid(int32_t height){
	for (uint32_t row = 0; row<=height; row ++){
		for (uint32_t col = row; col>=1; col--){
			printf("%"PRIu32 " " , col);
		}
		printf("\n");
	}
}


