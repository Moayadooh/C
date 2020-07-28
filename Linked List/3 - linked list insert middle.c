#include<stdio.h>
#include<stdlib.h>
struct number{
	int data;
	struct number *next;
};
struct number *head ,*newp ,*current;
void enter();
void list();
void main()
{
	head = NULL;
	char cho;
	do{
		printf("\nselect choice :\n");
		printf("e - Enter a number\n");
		printf("l - List the numbers\n");
		printf("x - Exit\n");
		scanf(" %c",&cho);
		switch(cho)
		{
			case'e':enter();break;
			case'l':list();break;
			case'x':printf("\nExit");break;
			default:printf("please select e or l or x !!\n");
		}
	}while(cho != 'x');
}
void enter()
{
	int location;
	newp = (struct number *)malloc(sizeof(struct number));
	
	printf("Enter the number : ");
	scanf("%d",&newp->data);
	if(head==NULL){
		head =newp;
		head->next = NULL;
	}
	else{
		printf("After what number you want to enter??\n");
		scanf("%d",&location);
		current = head;
		while(current!=NULL){
			if(current->data==location){
				break;
			}
			else{
				current = current->next;
			}
		}
		if(current==NULL){
			printf("The number you entered is not exist\n");
		}
		else{
			newp->next = current->next;
			current->next = newp;
		}
	}
}
void list()
{
	if(head==NULL){
		printf("Empty list....\n");
		return;
	}
	for(current=head;current!=NULL;current=current->next){
		printf("\n%d\n",current->data);
	}
}
