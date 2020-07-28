#include<stdio.h>
#include<stdlib.h>

struct stack1{
	int num;
	struct stack1 *next;
};
struct stack1 *tops1,*news1,*temps1;

struct stack2{
	int num;
	struct stack2 *next;
};
struct stack2 *tops2,*news2,*temps2,*dels;

void enq();
void deq();
void dis();
int main()
{
	int cho = 0;
	while(cho!=4)
	{
		printf("\nMain Menu:\n");
		printf("1 - Enqueue\n");
		printf("2 - Dequeue\n");
		printf("3 - Display\n");
		printf("4 - Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:enq();break;
			case 2:deq();break;
			case 3:dis();break;
			case 4:printf("Exit...");break;
			default:printf("\nPlease enter valid choice!!\n");
		}
	}
	return 0;
}
void enq()
{
	news1 = (struct stack1 *)malloc(sizeof(struct stack1));
	printf("\nEnter a number: ");
	scanf("%d",&news1->num);
	if(tops1==NULL){
		news1->next = NULL;
		tops1 = news1;
	}
	else{
		news1->next = tops1;
		tops1 = news1;
	}
}
void deq()
{
	if(tops1==NULL && tops2==NULL){
		printf("\nEmpty list!!");
	}
	else if(tops2!=NULL){
		temps2 = tops2;
		tops2 = tops2->next;
		free(temps2);
	}
	else{
		temps1 = tops1;
		while(temps1!=NULL){
			if(temps1->next==NULL){
				free(temps1);
				tops1 = NULL;
				break;
			}
			else{
				if(tops2==NULL){
					tops2 = (struct stack2 *)malloc(sizeof(struct stack2));
					tops2->num = temps1->num;
					tops2->next = NULL;
				}
				else{
					news2 = (struct stack2 *)malloc(sizeof(struct stack2));
					news2->num = temps1->num;
					news2->next = tops2;
					tops2 = news2;
				}
			}
			temps1 = temps1->next;
		}
	}
}
void dis()
{
	if(tops1==NULL && tops2==NULL){
		printf("\nEmpty list!!");
		return;
	}
	for(temps1=tops1;temps1!=NULL;temps1=temps1->next){
		printf("\n%d\n",temps1->num);
	}
	for(temps2=tops2;temps2!=NULL;temps2=temps2->next){
		printf("\n%d\n",temps2->num);
	}
}
