#include<stdio.h>
#include<stdlib.h>

struct queue1{
	int num;
	struct queue1 *next;
};
struct queue1 *frontq1,*rearq1,*newq1,*tempq1;

struct queue2{
	int num;
	struct queue2 *next;
};
struct queue2 *frontq2,*rearq2,*newq2,*tempq2;

void push();
void pop();
void dis();
int main()
{
	int cho = 0;
	while(cho!=4)
	{
		printf("\nMain Menu:\n");
		printf("1 - Push\n");
		printf("2 - Pop\n");
		printf("3 - Display\n");
		printf("4 - Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:dis();break;
			case 4:printf("Exit...");break;
			default:printf("\nPlease enter valid choice!!\n");
		}
	}
	return 0;
}
void push()
{
	newq1 = (struct queue1 *)malloc(sizeof(struct queue1));
	printf("\nEnter a number: ");
	scanf("%d",&newq1->num);
	newq1->next = NULL;
	if(frontq1==NULL && frontq2==NULL){
		frontq1 = newq1;
		rearq1 = newq1;
	}
	else if(frontq1!=NULL){
		rearq1->next = newq1;
		rearq1 = newq1;
	}
	else{
		newq2 = (struct queue2 *)malloc(sizeof(struct queue2));
		newq2->num = newq1->num;
		newq2->next = NULL;
		rearq2->next = newq2;
		rearq2 = newq2;
	}
}
void pop()
{
	if(frontq1==NULL && frontq2==NULL){
		printf("\nEmpty list!!");
	}
	else{
		if(frontq1==NULL){
			tempq2 = frontq2;
			while(tempq2!=NULL){
				if(tempq2->next==NULL){
					free(tempq2);
					frontq2 = NULL;
					break;
				}
				else{
					if(frontq1==NULL){
						frontq1 = (struct queue1 *)malloc(sizeof(struct queue1));
						frontq1->next = NULL;
						rearq1 = frontq1;
						frontq1->num = tempq2->num;
					}
					else{
						newq1 = (struct queue1 *)malloc(sizeof(struct queue1));
						newq1->num = tempq2->num;
						newq1->next = NULL;
						rearq1->next = newq1;
						rearq1 = newq1;
					}
				}
				tempq2 = tempq2->next;
			}
		}
		else if(frontq2==NULL){
			tempq1 = frontq1;
			while(tempq1!=NULL){
				if(tempq1->next==NULL){
					free(tempq1);
					frontq1 = NULL;
					break;
				}
				else{
					if(frontq2==NULL){
						frontq2 = (struct queue2 *)malloc(sizeof(struct queue2));
						frontq2->next = NULL;
						rearq2 = frontq2;
						frontq2->num = tempq1->num;
					}
					else{
						newq2 = (struct queue2 *)malloc(sizeof(struct queue2));
						newq2->num = tempq1->num;
						newq2->next = NULL;
						rearq2->next = newq2;
						rearq2 = newq2;
					}
				}
				tempq1 = tempq1->next;
			}
		}
	}
}
void dis()
{
	if(frontq1==NULL && frontq2==NULL){
		printf("\nEmpty list!!");
		return;
	}
	for(tempq2=frontq2;tempq2!=NULL;tempq2=tempq2->next){
		printf("\n%d\n",tempq2->num);
	}
	for(tempq1=frontq1;tempq1!=NULL;tempq1=tempq1->next){
		printf("\n%d\n",tempq1->num);
	}
}
