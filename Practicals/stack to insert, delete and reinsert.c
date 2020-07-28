#include<stdio.h>
#include<stdlib.h>

struct stack{
	int num;
	struct stack *next;
};
struct stack *news,*tops,*dels,*reins,*temps;

void push();
void pop();
void rei();
void dis();
int main()
{
	int cho = 1;
	while(cho!=5)
	{
		printf("\nMain Menu:\n");
		printf("1 - Push\n");
		printf("2 - Pop\n");
		printf("3 - Reinsert\n");
		printf("4 - Display\n");
		printf("5 - Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:rei();break;
			case 4:dis();break;
			case 5:printf("Exit...");break;
			default:printf("\nPlease enter valid choice!!\n");
		}
	}
}
void push()
{
	news = (struct stack *)malloc(sizeof(struct stack));
	printf("\nEnter a numer: ");
	scanf("%d",&news->num);
	if(tops==NULL){
		news->next = NULL;
		tops = news;
	}
	else{
		news->next = tops;
		tops = news;
	}
}
void pop()
{
	if(tops==NULL){
		printf("\nEmpty list!!");
	}
	else{
		dels = tops;
		tops = tops->next;
		if(reins==NULL){
			dels->next = NULL;
			reins = dels;
		}
		else{
			dels->next = reins;
			reins = dels;
		}
	}
}
void rei()
{
	if(reins==NULL){
		printf("\nThere is no number to reinsert!!");
	}
	else{
		temps = reins->next;
		reins->next = tops;
		tops = reins;
		reins = temps;
	}
}
void dis()
{
	if(tops==NULL){
		printf("\nEmpty list!!");
	}
	else{
		for(temps=tops;temps!=NULL;temps=temps->next){
			printf("\n%d\n",temps->num);
		}
	}
}
