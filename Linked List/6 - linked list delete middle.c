#include<stdio.h>
#include<stdlib.h>
struct number{
	int data;
	struct number *next;
};
struct number *head ,*newp ,*current ,*previous;
void enter();
void list();
void dele();
void main()
{
	head = NULL;
	char cho;
	do{
		printf("\nSelect choice :\n");
		printf("e - Enter a number\n");
		printf("l - List the numbers\n");
		printf("d - Delete a number\n");
		printf("x - Exit\n");
		scanf(" %c",&cho);
		switch(cho)
		{
			case'e':enter();break;
			case'l':list();break;
			case'd':dele();break;
			case'x':printf("\nExit");break;
			default:printf("please select e or l or d or x !!\n");
		}
	}while(cho != 'x');
}
void enter()
{
	newp = (struct number *)malloc(sizeof(struct number));
	
	if(head==NULL){
		head = newp;
		newp->next = NULL;
	}
	else{
		newp->next = head;
		head = newp;
	}
	printf("Enter the number : ");
	scanf("%d",&newp->data);
}
void list()
{
	if(head==NULL){
		printf("Empty list....\n");
	}
	else{
		for(current=head;current!=NULL;current=current->next){
			printf("\n%d\n",current->data);
		}
	}
}
void dele()
{
	int num;
	if(head==NULL){
		printf("Empty list....\n");
	}
	else{
		printf("Enter what number you want to delete : ");
		scanf("%d",&num);
		current = head;
		while(current->next!=NULL){
			if(current->data==num){
				break;
			}
			else{
				previous = current;
				current = current->next;
			}
		}
		if(current->data==num){
			if(current==head){
				head = current->next;
				free(current);
			}
			else{
				previous->next = current->next;
				free(current);
			}
		}
		else{
			printf("\nThe number you printed is not exist!!\n");
		}
		list();
	}
}
