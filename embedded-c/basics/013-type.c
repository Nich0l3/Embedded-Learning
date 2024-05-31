#include <stdio.h>

int main(){
	
	unsigned char data_loss = 0x87 + 0xFF00;
					// Compiler 'implicitly' consider the data size
					// of these constants as 4 bytes (int).
					// Known as integer promotion
					    
	// Data is lost during implicit type casting,
	//unsigned char data_loss = 0x00000087 + 0x0000ff00 = 0x0000ff87 (int) != 0x87 (uchar)
	
	unsigned char long_data_loss = 0x1FFFFFFFA0B0 + 0x1245;
					// Compiler will implicitly consider the constants size 
					// to be long int.
	
	unsigned char data_save = 0x01 + 0x0089;  
	// No data loss during typecasting as size of result is within the size of var.
	// unsigned char data_save = 0x00000001 + 0x00000089 = 0x0000008A (int) = 0x8A (uchar)

	unsigned char cast_data = 0x87 + (unsigned char)0xff00;
	// Data will still be lost, its just that it will not produce any implicit conversion warning
	
	if (data_loss == cast_data)
	{
		printf("Bummer! Data was lost :(\n");
	}
	
	float div = 80/3; // fraction part is lost during integer division
			  // Remember integer promotion

	float div_float = (float)80/3;


	printf("Implicit typecasted addition (save)**	= %d\n",data_save);
	printf("Explicit typecasted addition (loss)  	= %d\n",cast_data);
	printf("Implicit typecasted division 		= %f\n",div);
	printf("Explicit typecasted division  		= %f\n",div_float);

	return 0;
}
