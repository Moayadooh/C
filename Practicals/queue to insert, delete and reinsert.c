#include<stdio.h>
#include<stdlib.h>

struct queue{
	int num;
	struct queue *next;
};
struct queue *frontq, *rearq, *tempq, *tempqo, *newq, *rei;

void ins();
void dele();
void rein();
void dis();
int main()
{
	int cho=0;
	while(cho!=5){
		printf("\nMain menu:\n");
    	printf("1 - Insert\n");
    	printf("2 - Delete\n");
    	printf("3 - Reinsert\n");
    	printf("4 - Display\n");
    	printf("5 - Exit\n");
    	printf("Enter your choice: ");
    	scanf("%d",&cho);
    	switch(cho)
    	{
    		case 1:ins();break;
    		case 2:dele();break;
    		case 3:rein();break;
    		case 4:dis();break;
    		case 5:printf("\nExit.....");break;
    		default:printf("\nplease enter valid number!!\n");
    	}
	}	
	return 0;
}
void ins()
{
	newq = (struct queue *)malloc(sizeof(struct queue));
	printf("\nEnter a number: ");
	scanf("%d",&newq->num);
	newq->next = NULL;
	if(frontq==NULL){
		frontq = newq;
		rearq = newq;
	}
	else{
		rearq->next = newq;
		rearq = newq;
	}
}
void dele()
{
	if(frontq==NULL){
		printf("\nEmpty list!!");
	}
	else{
		tempq = frontq;
		frontq = frontq->next;
		tempq->next = NULL;
		if(rei==NULL){
			rei = tempq;
		}
		else{
			tempqo = rei;
			while(tempqo!=NULL){
				if(tempqo->next==NULL){
					tempqo->next = tempq;
					break;
				}
				tempqo = tempqo->next;
			}
		}
	}
}
void rein()
{
	if(rei==NULL){
		printf("\nThere is no number to reinserte!!");
	}
	else{
		tempq = rei;
		rei = rei->next;
		tempq->next = NULL;
		tempqo = frontq;
		while(tempqo!=NULL){
			if(tempqo->next==NULL){
				tempqo->next = tempq;
				rearq = tempq;
				break;
			}
			tempqo = tempqo->next;
		}
	}
}
void dis()
{
	if(frontq==NULL){
		printf("\nEmpty list!!");
	}
	else{
		for(tempq=frontq;tempq!=NULL;tempq=tempq->next){
			printf("\n%d\n",tempq->num);
		}
	}
}
