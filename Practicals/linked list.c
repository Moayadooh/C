#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
int a;
int location;
struct number{
	int data;
	struct number *next;
};
struct number *headptr, *newptr, *curptr,*prevptr;
void add_data(void);
void delete_data(void);
void list_data(void);
int main()
{
	headptr = NULL;
	int choice;
	int c = TRUE;
	while(c==TRUE){
    	printf("\nEnter your choice\n");
    	printf("1. Enter a number to the list\n");
    	printf("2. Delete a number\n");
    	printf("3. Display the list\n");
    	printf("4. Exit\n");
    	scanf("%d",&choice);
	    switch(choice){
	    	case 1:add_data();break;
	    	case 2:delete_data();break;
        	case 3:list_data();break;
            case 4:c = FALSE;break;
        	default: printf("\nWrong Input!");
		}
	}
	
	return 0;
}
void add_data()
{
	printf("\nEnter the number :");
	scanf("%d",&a);
	newptr = (struct number *)malloc(sizeof(struct number));
	if(headptr==NULL){
		headptr = newptr;
		newptr->next = NULL;
	}
	else{
		printf("After what number you want to enter??\n");
		scanf("%d",&location);
		for(curptr=headptr;curptr!=NULL;curptr=curptr->next){
			if(curptr->data==location){
				newptr->next = curptr->next;
				curptr->next = newptr;
			}
			else if(curptr->next==NULL){
				printf("\nNumber is not exist!!\n");
			}
		}
	}
	newptr->data = a;
	list_data();
}
void delete_data()
{
	if(headptr==NULL){
		printf("\nCant delete\nEmpty list!!\n");
		return;
	}
	else{
		printf("\nwhat number you want to delete??\n");
		scanf("%d",&location);
		curptr = headptr;
		if(curptr->data==location){
			headptr = curptr->next;
			free(curptr);
		}
		else{
        	while(curptr->next!=NULL){
        		prevptr = curptr;
	    		curptr = curptr->next;
	         	if(curptr->data==location){
	     		prevptr->next = curptr->next;
		    	free(curptr);
	     		break;
	    	    }
	    	    else if(curptr->next==NULL){
	    	    	printf("\nNumber is not exist!!\n\n");
				}
	    	}
		}
	}
	list_data();
}
void list_data()
{
	if(headptr==NULL){
		printf("\nCant display\nEmpty list!!\n");
		return;
	}
	printf("Your list :\n");
	for(curptr = headptr;curptr!=NULL;curptr=curptr->next){
		printf("\n%d\n",curptr->data);
	}
}
