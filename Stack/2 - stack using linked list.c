#include<stdio.h>
#include<stdlib.h>
struct stack{
	int data;
	struct stack *next;
};
struct stack *tops ,*news ,*dels;
void push();
void pop();
void dis();
void main()
{
	tops = NULL;
	char ans;
	int cho;
	do{
		printf("\nMain List :\n");
		printf("1 - Push\n");
		printf("2 - Pop\n");
		printf("3 - Display\n");
		printf("4 - Exit\n");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:dis();break;
			case 4:exit(0);
		}
		printf("\nDo you want to continue??\n");
		ans = getche();
	}while(ans == 'y' || ans =='Y');
}
void push()
{
	news = (struct stack *)malloc(sizeof(struct stack));
	
	printf("\nEnter the item : ");
	scanf("%d",&news->data);
	news->next = tops;
	tops = news;
	dis();
}
void pop()
{
	if(tops==NULL){
		printf("\nEmpty list!!\n");
	}
	else{
		printf("the item poped is : %d\n",tops->data);
		dels = tops;
		tops = tops->next;
		free(dels);
		dis();
	}
}
void dis()
{
	if(tops==NULL){
		printf("\nEmpty list!!\n");
	}
	else{
		for(dels=tops;dels!=NULL;dels=dels->next){
			printf("\n%d\n",dels->data);
		}
	}
}
