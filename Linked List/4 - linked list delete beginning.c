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
		printf("\nselect choice :\n");
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
		printf("Empty list.....\n");
		return;
	}
	for(current=head;current!=NULL;current=current->next){
		printf("\n%d\n",current->data);
	}
}
void dele()
{
	if(head==NULL){
		printf("Empty list ,cant delete....\n");
		return;
	}
	current = head;
	head = current->next;
	free(current);
	list();
}
