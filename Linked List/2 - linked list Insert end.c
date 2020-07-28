#include<stdio.h>
#include<stdlib.h>
struct number{
	int data;
	struct number *next;
};
struct number *head ,*newp ,*current ,*temp;
void enter();
void list();
void main()
{
	char cho;
	head = NULL;
	do{
		printf("\nSelect choice :\n");
		printf("e - Enter a number\n");
		printf("l - List the numbers\n");
		printf("x - Exit\n");
		scanf(" %c",&cho);
		switch(cho)
		{
			case'e':enter();break;
			case'l':list();break;
			case'x':printf("Exit");break;
			default:printf("please select e or l or x !!\n");
		}
	}while(cho != 'x');
}
void enter()
{
	newp = (struct number *)malloc(sizeof(struct number));
	
	if(head==NULL){
		head = newp;
		head->next = NULL;
	}
	else{
		current = head;
		while(current->next != NULL){
			current = current->next;
		}
		current->next = newp;
		newp->next = NULL;
	}
	printf("Enter a number : ");
	scanf("%d",&newp->data);
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
