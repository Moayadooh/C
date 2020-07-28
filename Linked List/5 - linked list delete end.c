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
    		default:printf("\nplease select e or l or d or x!!\n");
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
	printf("\nEnter the number : ");
	scanf("%d",&newp->data);
}
void list()
{
	if(head==NULL){
		printf("\nEmpty list....\n");
	}
	else{
		for(current=head;current!=NULL;current=current->next){
			printf("\n%d\n",current->data);
		}
	}
}
void dele()
{
	if(head==NULL){
		printf("\nCant delete ,Empty list!!\n");
	}
	else{
		current=head;
		while(current->next!=NULL){
			previous = current;
			current = current->next;
		}
		if(current==head){
			head = NULL;
			free(current);
		}
		else{
			previous->next = NULL;
	    	free(current);
		}
		list();
	}
}
