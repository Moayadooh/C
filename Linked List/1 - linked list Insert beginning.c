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
//	head = NULL;
	char cho;
	do{
		printf("\nselect choice :\n\n");
		printf("e - Enter a number\n");
		printf("l - List the numbers\n");
		printf("x - Exit\n");
		scanf(" %c",&cho);
		switch(cho)
		{
			case 'e':enter();break;
			case 'l':list();break;
			case 'x':printf("Exit");break;
			default:printf("please select e or l or x!!\n");
		}
	}while(cho != 'x');
}
void enter()
{
	newp = (struct number *)malloc(sizeof(struct number));
	
	if(head==NULL){
		head = newp;
		head->next  = NULL;
	}
	else{
		newp->next = head;
		head = newp;
	}
	printf("\nEnter the number: ");
	scanf("%d",&head->data);
}
void list()
{
	if(head==NULL){
		printf("\nEmpty list....\n");
		return;
	}
	for(current=head;current!=NULL;current=current->next){
		printf("\n%d\n",current->data);
	}
}
