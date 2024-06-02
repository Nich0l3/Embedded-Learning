#include <stdio.h>
#include <stdint.h>

typedef struct {
// all these variables refer to a single 32 bit memory
// bit fields defines sharing of the same memory
	uint32_t crc		:2;
	uint32_t status		:1;
	uint32_t payload	:12;
	uint32_t bat		:3;
	uint32_t sensor		:3;
	uint32_t longAddr	:8;
	uint32_t shortAddr	:2;
	uint32_t addrMode	:1;
} packet_t;

void wait_for_user_input(void);

int main(int argc, char * argv[]){
	
	uint32_t input = 0;
	printf("Enter the 32-bit packet value : ");
	scanf("%X", &input);

	packet_t packet; 

	packet.crc 		= (uint8_t) (input & 0x3);
	packet.status 		= (uint8_t) ((input >> 2) & 0x1 );
	packet.payload 		= (uint16_t)((input >> 3) & 0xFFF); // F - '1111' FFF - '1111 1111 1111' , used for masking 12 bits
	packet.bat 		= (uint8_t) ((input >> 15) & 0x7);
	packet.sensor 		= (uint8_t) ((input >> 18) & 0x7);
	packet.longAddr 	= (uint8_t) ((input >> 21) & 0xFF);
	packet.shortAddr 	= (uint8_t) ((input >> 29) & 0x3);
	packet.addrMode 	= (uint8_t) ((input >> 31) & 0x1);

	printf("crc\t\t:%#x\n",packet.crc); // '#' prefix hex number with 0x
	printf("status\t\t:%#x\n",packet.status);
	printf("payload\t\t:%#x\n",packet.payload);
	printf("bat\t\t:%#x\n",packet.bat);
	printf("sensor\t\t:%#x\n",packet.sensor);
	printf("longAddr\t:%#x\n",packet.longAddr);
	printf("shortAddr\t:%#x\n",packet.shortAddr);
	printf("addrMode\t:%#x\n",packet.addrMode);

	printf("size of struct is %llu\n",sizeof(packet));

	wait_for_user_input();
	return 0;
}


void wait_for_user_input(void){
	printf("Press enter to exit this application");
	while(getchar()!= '\n');
	getchar(); 
}
