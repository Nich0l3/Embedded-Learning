#include <stdio.h>
#include <stdint.h>

union Packet {
	
	uint32_t packetValue;
	
	struct{
		uint32_t crc		:2;
		uint32_t status		:1;
		uint32_t payload	:12;
		uint32_t bat		:3;
		uint32_t sensor		:3;
		uint32_t longAddr	:8;
		uint32_t shortAddr	:2;
		uint32_t addrMode	:1;
	}packetFields;
};

void wait_for_user_input(void);

int main(int argc, char * argv[]){
	
	union Packet packet; 
	printf("Enter the 32-bit packet value : ");
	scanf("%X", &packet.packetValue);

	printf("crc\t\t:%#x\n",packet.packetFields.crc); 
	printf("status\t\t:%#x\n",packet.packetFields.status);
	printf("payload\t\t:%#x\n",packet.packetFields.payload);
	printf("bat\t\t:%#x\n",packet.packetFields.bat);
	printf("sensor\t\t:%#x\n",packet.packetFields.sensor);
	printf("longAddr\t:%#x\n",packet.packetFields.longAddr);
	printf("shortAddr\t:%#x\n",packet.packetFields.shortAddr);
	printf("addrMode\t:%#x\n",packet.packetFields.addrMode);

	printf("size of struct is %llu\n",sizeof(packet));

	wait_for_user_input();
	return 0;
}


void wait_for_user_input(void){
	printf("Press enter to exit this application");
	while(getchar()!= '\n');
	getchar(); 
}
