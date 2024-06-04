#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

int main(){

// equivalent to ptr[100],i.e. it is a straing VARIABLE , but it is assigning memory in heap
	char *ptr = (char*) malloc (100*sizeof(char)); 

	if (ptr == NULL) {
     		 printf("Memory allocation failed.\n");
        	return 1; 
	}

	char * str=  "Are you serious";

	strcpy(ptr,str);


///////////////				uno
// not a good practise
//	printf(ptr); 
//printf expects a string (i.e., a pointer to a null-terminated array of characters) as its argument, not a single character. 
// Thus dereferencing won't work with string format specifier
	printf("%s", ptr);

	printf("\n");

//////////////				dos
	for (uint32_t i = 0; i < sizeof("Are you serious"); i++ )
	printf("%c",*(ptr+i));


/////////////				tres
	printf("\n");

	char * p = ptr;
	while(*p != '\0'){
		printf("%c",*p);
		p++;
	}

	printf("\n");
}
