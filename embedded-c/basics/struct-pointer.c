#include <stdio.h>
#include <stdint.h>

struct DataSet{

	char data1;
	int data2;
	char data3;
	short data4;
};

//Prototype of this function will come after struct definition because it uses it's pointer as an parameter, and without the struct def the pointer has no meaning.
// This is one of the few reason why we use different header file for struct :)
void displayMemberElements(struct DataSet * pdata); 

int main(void){

	struct DataSet data;

	data.data1 = 0x11;
	data.data2 = 0xffffeeee;
	data.data3 = 0x22;
	data.data4 = 0xabcd;

	displayMemberElements(&data);

	getchar();

	return 0;
}

void displayMemberElements(struct DataSet * pdata){
	printf("data1 = %X\n", pdata -> data1);
	printf("data2 = %X\n", pdata -> data2);
	printf("data3 = %X\n", pdata -> data3);
	printf("data4 = %X\n", pdata -> data4);
}
