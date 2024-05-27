#include<stdio.h>

int main(void){

	char in1, in2, in3, in4, in5, in6;

	in1 = getchar();	
	getchar();		// clear the special character
	in2 = getchar();
	getchar();
	in3 = getchar();
	getchar();
	in4 = getchar();
	getchar();
	in5 = getchar();
	getchar();
	in6 = getchar();
				// last special charactered is handled by the loop	

	printf("%d, %d, %d, %d, %d, %d",in1, in2, in3, in4, in5, in6);
	
	printf("\nPress enter key to exit the application \n");
    	while(getchar() != '\n')
    	{
    		//just read the input buffer and do nothing
    	}
    	getchar();
	return 0;
}
