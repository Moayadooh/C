//program for student regestration system 
//function declaration to add new student record


#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct record{
	int id;
	char name[20];
	int mobile;
	int age;
	char gender[5];
	char specialization[20];
	char city[10];
	char address[10];
	char date[20];
	struct record *next;
};
struct record *headptr,*newptr,*currptr,*prevptr;  //pointer that can point to a node

int idsearch;
int erase_record;
int out = 0;
char ans = 'y';

void add();     //function declaration to add new student record
void search();  //function declaration to search student record
void update();  //function declaration to update student record
void del();     //function declaration to delete student record
void display(); //function declaration to display all students records
int main()      //main function
{
	int choice;
	headptr = NULL;  //function declaration to display all students records
	while(ans=='y'|| ans=='Y')
	{
		printf("\nWELCOME TO THE STUDENT REGESTRATION SYSTEM\n\n");
		printf("Main menu :\n");
    	printf("1 - Add student record\n");
    	printf("2 - Search student record\n");
    	printf("3 - Update stdudent record\n");
    	printf("4 - Delete student record\n");
    	printf("5 - Display a students records\n");
    	printf("6 - Exit\n");
    	printf("Enter you choice :");
    	scanf("%d",&choice);
    	switch(choice)
    	{
    		case 1:
			add();
			break;
    		case 2:
			search();
			break;
    		case 3:
			update();
			break;
    		case 4:
			del();
			break;
    		case 5:
    			currptr = headptr;
			display();
			break;
    		case 6:
			exit(0);
			break;
    		default:
			printf("\nPlease enter correct choice!!\n");
    	}
    	printf("\ndo you want to continue?\n");
    		ans = getche();
	}
	return 0;
}
void add()    //function to add new student record
{
	newptr = (struct record *)malloc(sizeof(struct record));  //create new node
	printf("\nEnter student ID: ");
	scanf("%d",&newptr->id);
	printf("Enter student name: ");
	scanf("%s",&newptr->name);
	printf("Enter student mobile number: ");
	scanf("%d",&newptr->mobile);
	printf("Enter student age: ");
	scanf("%d",&newptr->age);
	printf("Enter student gender: ");
	scanf("%s",&newptr->gender);
	printf("Enter student specialization: ");
	scanf("%s",&newptr->specialization);
	printf("Enter student city: ");
	scanf("%s",&newptr->city);
	printf("Enter student address: ");
	scanf("%s",&newptr->address);
	printf("Enter student start date: ");
	scanf("%s",&newptr->date);
	printf("\nRecord inserted successfuly.\n");
	if(headptr==NULL)  //check if list is empty??
	{
		headptr = newptr;   //point head to new none
		headptr->next = NULL;  //point link of head to NULL
	}
	else{
		newptr->next = headptr;  //point link of new node to head
		headptr = newptr;        //point head to address of new node
	}
}
void search()   //function to search student record
{
	if(headptr==NULL){
		printf("There is no record available to search!!\n");
	}
	else{
		printf("\nEnter student ID to show the information of student:\n");
		scanf("%d",&idsearch);
		currptr = headptr;
		while(currptr!=NULL){
			if(currptr->id==idsearch)  //check id is found
			{
				break;
			}
			else{
				currptr = currptr->next;  //move current to next node
			}
		}
		if(currptr==NULL)
		{
			printf("\nRecord is not exist please enter currect ID!!\n");
		}
		else{
			printf("\nStudent ID: %d\n",currptr->id);
        	printf("student name: %s\n",currptr->name);
        	printf("student mobile number: %d\n",currptr->mobile);
        	printf("student age: %d\n",currptr->age);
        	printf("student gender: %s\n",currptr->gender);
        	printf("student specialization: %s\n",currptr->specialization);
        	printf("student city: %s\n",currptr->city);
        	printf("student address: %s\n",currptr->address);
        	printf("student start date: %s\n",currptr->date);
		}
	}
}
void update()    //function to update student record
{
	if(headptr==NULL)  //check if list is empty
	{
		printf("There is no record available to search!!\n");
	}
	else{
		printf("\nEnter student id to update his or here information :\n");
		scanf("%d",&idsearch);
		currptr = headptr;
		while(currptr!=NULL){
			if(currptr->id==idsearch)
			{
				break;
			}
			else{
				currptr = currptr->next;
			}
		}
		if(currptr==NULL)
		{
			printf("\nStudent id you entred is not exist!!\n");
		}
		else{
			printf("\nStudent ID: %d\n",currptr->id);
        	printf("student name: %s\n",currptr->name);
        	printf("student gender: %s\n",currptr->gender);
        	printf("student start date: %s\n",currptr->date);
        	printf("student age: %d\n",currptr->age);
        	printf("student mobile number: ");
        	scanf("%d",&currptr->mobile);
        	printf("student specialization: ");
        	scanf("%s",&currptr->specialization);
        	printf("student city: ");
        	scanf("%s",&currptr->city);
        	printf("student address: ");
        	scanf("%s",&currptr->address);
        	printf("\nupdate successfuly\n");
		}
	}
}
void del()   //function to delete student record
{
	if(headptr==NULL){
		printf("\nThere is no record available to delete!!\n");
	}
	else{
		out = 0;
		while(out==0)
		{
		printf("\n1 - delete from begining of records.\n");
		printf("2 - delete from end of records.\n");
		printf("3 - cancel.\n");
		scanf("%d",&erase_record);
		switch(erase_record)
		{
			case 1:
			currptr = headptr;
			headptr = headptr->next;
			free(currptr);
			printf("\nDelete from begining successfuly\n");
			out = 1;
			break;
			case 2:
			currptr = headptr;
			while(currptr->next!=NULL)
			{
			prevptr = currptr;
			currptr = currptr->next;
			}
			if(currptr==headptr)
			{
			headptr = NULL;
			free(currptr);  //delete the node to free the memory
			}
			else{
			prevptr->next = NULL;
			free(currptr);
			}
			printf("\nDelete from end successfuly\n");
			out = 1;
			break;
			case 3:
			out = 1;
			break;
			default:
			printf("\nplease enter currect option!!\n");
		}
	  }
	}
}
void display()   //function to display all students records
{
	if(headptr==NULL)   //check if list is empty??
	{
		printf("\nThere is no record available to display!!\n");
	}
	else{
		if(currptr==NULL)
		return;
		else
		printf("\nStudent ID: %d\n",currptr->id);
        printf("student name: %s\n",currptr->name);
        printf("student mobile number: %d\n",currptr->mobile);
        printf("student age: %d\n",currptr->age);
        printf("student gender: %s\n",currptr->gender);
        printf("student specialization: %s\n",currptr->specialization);
        printf("student city: %s\n",currptr->city);
        printf("student address: %s\n",currptr->address);
        printf("student start date: %s\n",currptr->date);
        currptr = currptr->next;  //move cuurent node to next node
        printf("\n\n");
        display();             //function call to it self
	}
}
