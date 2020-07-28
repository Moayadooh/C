//program for student regestration system

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct record             //structure to hold data of record together(structure and linked list topics)
{
	int id;
	char name[100];
	int mobile;
	char DOB[100];
	char gender[100];
	char specialization[100];
	char city[100];
	char address[100];
	char start_date[100];
	struct record *next;        //pointer that point to next node
};
struct record *frontq,*rearq,*tempq,*newq;   //pointer that can point to a node(by using Queue variables)

int student_ID;
static int new_id = 0;

void add_record();                //function to add new student record
void search_record();             //function to search student record(by using linear sequential search)
void update_record();             //function to update student record
void delete_record();             //function to delete student record
void display_record();            //function to display all students records(by using recurion)
int main()                        //main function
{
    int choice;
    char ans = 'y';
    while(ans=='y' || ans=='Y')
	{
    	printf("\nWELCOME TO THE STUDENTS REGESTRATION SYSTEM\n\n");
    	printf("1 - Add student record\n");
    	printf("2 - Search student record\n");
    	printf("3 - Update student record\n");
    	printf("4 - Delete student record\n");
    	printf("5 - Display all students records\n");
    	printf("6 - Exit\n");
    	printf("Enter your choice: ");
    	scanf("%d",& choice);
    	switch (choice)
    	{
    		case 1:add_record();
    		break;
    		case 2:search_record();
    		break;
    		case 3:update_record();
    		break;
    		case 4:delete_record();
    		break;
    		case 5:
			tempq=frontq;
			display_record();
    		break;
    		case 6:exit(0);
    		break;
    		default:printf("\nPlease enter correct choice!!\n");
    	}
    	printf("\nDo you want to continue Y/N\n");
    	ans = getche();
	}
	return 0;
}
void add_record()     //function to add new student record
{
	newq = (struct record *)malloc(sizeof(struct record));   //create new node "Memory Allocation"
	
	newq->id = ++new_id;    //create new ID to new student
	printf("\nStudent ID : %d\n",newq->id);
	printf("Enter Student Name : ");
	scanf(" %[^\n]", & newq->name);
	printf("Enter Student Mobile Number : ");
	scanf("%d", & newq->mobile);
	printf("Enter Student Date of Birth : ");
	scanf("%s", & newq->DOB);
	printf("Enter Student Gender : ");
	scanf("%s", & newq->gender);
	printf("Enter Student Specialization : ");
	scanf(" %[^\n]", & newq->specialization);
	printf("Enter Student City : ");
	scanf(" %[^\n]", & newq->city);
	printf("Enter Student Address : ");
	scanf(" %[^\n]", & newq->address);
	printf("Enter Student Start Date : ");
	scanf("%s", & newq->start_date);
	printf("\nrecord inserted successfully\n");
	newq->next = NULL;     //point link of new node to NULL
	
	if(frontq==NULL)    //check if list is empty
	{
		frontq = newq;
		rearq = newq;
	}
	else{
		rearq->next = newq;  //insert the new node to end of the list
		rearq = newq;        //point rearq to newq
	}
}
void search_record()     //function to search student record
{
	if(frontq==NULL)     //check if list is empty
	{
		printf("\nEmpty records!!\n");
	}
	else{
		printf("\nEnter student ID to show the record :");
		scanf("%d", & student_ID);
		tempq = frontq;
		while(tempq!=NULL)
		{
			if(tempq->id==student_ID)
			{
				printf("\nStudent ID : %d\n",tempq->id);
        	    printf("Student Name : %s\n",tempq->name);
                printf("Student Mobile Number : %d\n",tempq->mobile);
            	printf("Student Date of Birth : %s\n",tempq->DOB);
            	printf("Student Gender : %s\n",tempq->gender);
            	printf("Student Specialization : %s\n",tempq->specialization);
            	printf("Student City : %s\n",tempq->city);
            	printf("Student Address : %s\n",tempq->address);
            	printf("Student Start Date : %s\n",tempq->start_date);
            	break;
			}
			else{
				tempq = tempq->next;     //move tempq to next node
			}
		}
		if(tempq==NULL)      //check if list is empty
		{
			printf("\nStudent ID %d is not exist!!\n",student_ID);
		}
	}
}
void update_record()       //function to update student record
{
	if(frontq==NULL)       //check if list is empty
	{
		printf("\nEmpty records!!\n");
	}
	else{
		printf("\nEnter student ID to update the record :");
		scanf("%d", & student_ID);
		tempq = frontq;
		while(tempq!=NULL)
		{
			if(tempq->id==student_ID)
			{
				printf("\nStudent ID : %d\n",tempq->id);
        	    printf("Student Name : %s\n",tempq->name);
            	printf("Student Date of Birth : %s\n",tempq->DOB);
            	printf("Student Gender : %s\n",tempq->gender);
                printf("Student Start Date : %s\n",tempq->start_date);
                printf("Enter student mopile number : ");
                scanf("%d",&tempq->mobile);
                printf("Enter student specialization : ");
                scanf(" %[^\n]",&tempq->specialization);
                printf("Enter student city : ");
                scanf(" %[^\n]",&tempq->city);
                printf("Enter student address : ");
                scanf(" %[^\n]",&tempq->address);
                printf("\nRecord updated successfully\n");
            	break;
			}
			else{
				tempq = tempq->next;    //move tempq to next node
			}
		}
		if(tempq==NULL)
		{
			printf("\nStudent ID %d is not exist!!\n",student_ID);
		}
	}
}
void delete_record()       //function to delete student record
{
	if(frontq==NULL)       //check if list is empty
	{
		printf("\nEmpty records!!\n");
		return;
	}
	else{
		printf("\nRecord of student ID %d has been deleted!!\n",frontq->id);
		tempq = frontq;
		frontq = frontq->next;
		free(tempq);
	}
	if(frontq!=NULL)     //display record if list is not empty
	{
		display_record();
	}
	else{
		printf("\nRecords now is empty!!\n");
	}
}
void display_record()   //function to display all students records
{
	if(frontq==NULL)   //check if list is empty
    {
    	printf("\nEmpty records!!\n");
	}
	else{
    	if(tempq==NULL)   //check if reaching NULL to stop
    	return;
    	else
    	printf("Student ID : %d\n",tempq->id);
        printf("Student Name : %s\n",tempq->name);
        printf("Student Mobile Number : %d\n",tempq->mobile);
        printf("Student Date of Birth : %s\n",tempq->DOB);
        printf("Student Gender : %s\n",tempq->gender);
        printf("Student Specialization : %s\n",tempq->specialization);
        printf("Student City : %s\n",tempq->city);
        printf("Student Address : %s\n",tempq->address);
        printf("Student Start Date : %s\n\n",tempq->start_date);
        tempq=tempq->next;    //move tempq to next node
        display_record();     //recursion function
	}
}
