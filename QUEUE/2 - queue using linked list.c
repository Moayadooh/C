#include<stdio.h>
#include<stdlib.h>
struct number{
	int data;
	struct number *next;
};
struct number *rear ,*front ,*newq ,*temp;
void enq();
void deq();
void dis();
void main()
{
	rear = NULL;
	front = NULL;
	char lett;
	do{
		printf("\nMain menu :\n");
		printf("A - Enqueue\n");
		printf("B - Dequeue\n");
		printf("D - Display component of queue\n");
		printf("X - Exit\n");
		scanf(" %c",&lett);
		lett = toupper(lett);
		switch(lett)
		{
			case'A':enq();break;
			case'B':deq();break;
			case'D':dis();break;
			case'X':printf("\nExit.....");break;
			default:printf("\nplease select currect choice!!\n");
		}
	}while(lett != 'X');
}
void enq()
{
	newq = (struct number *)malloc(sizeof(struct number));
	
	printf("Enter a number :");
	scanf("%d",&newq->data);
	newq->next = NULL;
	if(front==NULL){
		front = newq;
		rear = newq;
	}
	else{
		rear->next = newq;
		rear = newq;
	}
	dis();
}
void deq()
{
	if(front==NULL){
		printf("\nEmpty List!!\n");
	}
	else{
		temp = front;
		front = temp->next;
		free(temp);
		dis();
	}
}
void dis()
{
	if(front==NULL){
		printf("\nEmpty List!!\n");
	}
	else{
		for(temp=front;temp!=NULL;temp=temp->next){
			printf("\n%d\n",temp->data);
		}
	}
}
