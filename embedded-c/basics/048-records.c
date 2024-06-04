#include <stdio.h>
#include <stdint.h>
#include <string.h>

//Definition of a student record
typedef struct
{
    int		rollNumber;
    char 	name[100];
    char  	branch[50];
    char  	dob[15];
    int 	semester;

}STUDENT_INFO_t;


//Maximum record this program can store
int max_record=10;


//Global array of records
STUDENT_INFO_t students[10];


//function prototypes of this program
void display_menu(void);
int read_menu_code(void);
void decode_menu_code(int8_t menu_code);
void display_all_records(STUDENT_INFO_t *record, int8_t max_record);
int check_roll_number(int roll_number, STUDENT_INFO_t *record, int8_t max_record);
int add_new_record(STUDENT_INFO_t *record, int8_t max_record);
int delete_record(STUDENT_INFO_t *record, int8_t max_record);



//starting point of the application
int main()
{

    int8_t menu_code;
    int8_t app_continue = 1;
    
    printf("Student record management program\n");

     while(app_continue)
     {
		//1. display menu
		display_menu();

		//read the menu code
		menu_code = read_menu_code();

		if(menu_code){
			//Decode the menu code
			decode_menu_code(menu_code);
		}else{
			//end the application if menu_code = 0;
			app_continue = 0;
			printf("Exiting application\n");
		}

     }

    return 0;
}

/*
 * This function displays the menu to the user
 * Please note that 0 is the code to exit this program
 */
void display_menu(void)
{
    printf("Display all records  -->1\n");
    printf("Add new record       -->2\n");
    printf("Delete a record      -->3\n");
    printf("Exit application     -->0\n");
    printf("Enter your option here:");
}

/*
 * This function reads the menu code entered by the user and return the code
 */
int read_menu_code(void)
{
    int ret;	
	scanf("%d",&ret);
	return ret;
}

//This function decodes the menu
void decode_menu_code(int8_t menu_code)
{
    int8_t ret;

    switch(menu_code)
    {
        case 1:
        	printf("Displaying all students record\n");
        	display_all_records(students,max_record);
        	break;
        case 2:
			printf("Add a new record\n");
			ret = add_new_record(students,max_record);
			!ret ? printf("Record add unsuccessful\n") : printf("Record added successfully\n");
			break;
        case 3:
			printf("Delete a record\n");
			ret = delete_record(students,max_record);
			ret ? printf("Record deleted successfully\n") : printf("Record not found\n");
			break;
        default:
			printf("Invalid input\n");
    }
}

/*
 * This function displays all the records so far entered by the user
 * in_param[1] : base address of the records
 * in_param[2] : maximum record number maintained by this program
 * Note: if no records found, then this fucntion should print "No records found'
 */

void display_all_records(STUDENT_INFO_t *record, int8_t max_record)
{
	int8_t recordNum = 0;
	STUDENT_INFO_t *parser = record;
	for (int8_t i = 0; i < max_record; i++)	{
		if (parser ->rollNumber)
		{
			printf("\n");
			printf("rollNumber\t:%d\n", 		parser->rollNumber);
			printf("studentSemester\t:%s\n",	parser->name);
			printf("studentDOB\t:%s\n", 		parser->branch );
			printf("studentBranch\t:%s\n", 		parser->dob );
			printf("studentName\t:%d\n\n",		parser->semester );
			recordNum++;
			parser++;
		}
	}

	if (!recordNum){
		printf("No records found\n");
	}
}
/*
 * This function matches the given roll_numer with the roll numbers of the records by traversing through record node one by one
 * in_param[1]: given roll number
 * in_param[2]: base address of the records
 * in_param[3]: max record number of this program
 * return : 0 for no_match , 1 for match
 */
int check_roll_number(int roll_number, STUDENT_INFO_t *record, int8_t max_record)
{
  for (int8_t i = 0; i < max_record; i++){
	  if (roll_number == record[i].rollNumber){
		  return 1;
	  }
  }
  return 0;
}

/*
 * This function adds a new record by asking various information from the user.
 * before adding a record , function has to identify an empty node
 * Assume a node is empty , if roll number field of node is zero
 * in_param[1]: base address of the records
 * in_param[2]: max record number of this program
 * return values : 0 if add is unsuccessful, 1 if add is successful
 * Note1 : This function should also print "roll number already exist" if roll number entered is already exist in the record
 * Note2 : This function should also print "No space available", if all nodes of the array are occupied
 */
int add_new_record(STUDENT_INFO_t *record, int8_t max_record)
{
	for (int8_t i = 0; i < max_record; i++)	{
		if (!record[i].rollNumber) {
			
			int rollCheck;

			printf("Enter roll number\t: ");
			scanf("%d",&rollCheck);
			
			if (check_roll_number(rollCheck,record,max_record)){
				printf("Roll number already exists\n");
				return 0;
			}

			record[i].rollNumber = rollCheck;
			printf("Enter student semester\t: ");
			scanf("%d",&record[i].semester);
			printf("Enter DOB(mm/dd/yyyy)\t: ");
			scanf("%s",&record[i].dob);
			printf("Enter student branch\t: ");
			scanf("%s",&record[i].branch);
			printf("Enter studet name\t: ");
			scanf("%s",&record[i].name);	
			return 1;
		}
	}
		
	printf("No space available\n");
	return 0;
}


/*
 * Delete a record.
 * first ask the user to enter the roll number of the student
 * delete a node against that roll number
 * in_param[1]: base address of the records
 * in_param[2]: max record number of this program
 * return values : 0 if delete unsuccessful, 1 if delete successful
 *
 */
int delete_record(STUDENT_INFO_t *record, int8_t max_record)
{
 int rollCheck;
 printf("Enter the roll number to be deleted\t: ");
 scanf("%d",&rollCheck);
 
 for (int8_t i = 0; i < max_record; i++){
	 if( (*(record+i)).rollNumber == rollCheck){

		(record+i) -> rollNumber = 0;

		for (int j = 0; j < strlen((record+i) -> name); j++) {
        	*( ( (record+i) -> name ) + j ) = '\0';
    	}

		memset((record+i) -> branch, '\0', sizeof((record+i) -> branch));

		*((record+i) -> dob) = '\0';
	
		(record+i) -> semester	 = 0;

		return 1;
	 }
 }
 printf("No records found...\n");
 return 0;

}

