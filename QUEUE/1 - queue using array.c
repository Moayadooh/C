#include<stdio.h>

int num;
int print = 0;
int rear = 5;
int front = 0;
int queue[6];
int i ,j;

void enq();
void deq();
void dis();
void main()
{
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
	if(print==6){
		printf("\nFull Queue cant enqueue!!\n");
	}
	else{
		printf("\nEnter a number :");
		scanf("%d",&num);
		rear = (rear+1)%6;
		queue[rear] = num;
		print++;
		dis();
	}
}
void deq()
{
	if(print==0){
		printf("\nEmpty Queue cant dnqueue!!\n");
	}
	else{
		front = (front+1)%6;
		print--;
		dis();
	}
}
void dis()
{
	i = front;
	j = print;
	if(print==0){
		printf("\nEmpty queue!!\n");
	}
	else{
		printf("\nComponent of queue is :");
    	while(j != 0){
    		printf("\n%d\n",queue[i]);
	    	i = (i+1)%6;
	    	j--;
    	}
	}
}
