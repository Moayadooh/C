#include<stdio.h>
#include<stdlib.h>

struct stack1{
	int data;
	struct stack1 *next;
};
struct stack1 *tops1,*news1,*dels1,*temps1,*rein1,*tempso,*prev1,*store1;

struct stack2{
	int data;
	struct stack2 *next;
};
struct stack2 *tops2,*news2,*dels2,*temps2,*rein2,*tempst,*prev2,*store2;

int a;

void push();
void pop();
void dis();
void push2();
void pop2();
int main()
{
	int cho = 0;
	while(cho!=4)
	{
		printf(">>MENU<<\n");
		printf("1 - Insert a number\n");
		printf("2 - Delete operation\n");
		printf("3 - Re-enter operation\n");
		printf("4 - Exit\n");
		printf("SELECT OPTION: ");
		scanf("%d",&cho);
		switch(cho)
		{
			case 1:push();break;
			case 2:pop();break;
			case 3:pop2();break;
			case 4:printf("Exit....");break;
			default:printf("\nPlease enter currect choice!!");
		}
	}
}
void push()
{
	news1 = (struct stack1 *)malloc(sizeof(struct stack1));
	printf("\nNUMBER: ");
	scanf("%d",&news1->data);
	news1->next = NULL;
	if(tops1==NULL){
		tops1 = news1;
	}
	else{
		temps1 =tops1;
		while(temps1!=NULL){
			if(temps1->next==NULL){
				temps1->next = news1;
				break;
			}
			temps1 = temps1->next;
		}
		}
	dis();
}
void pop()
{
	if(tops1==NULL){
		printf("\nEmpty list!!");
	}
	else{
		if(tops1->next==NULL){
			tops1 = NULL;
		}
		else{
			temps1 = tops1;
		prev1 = tops1;
		while(temps1!=NULL){
			if(temps1->next==NULL){
				prev1->next = NULL;
				break;
			}
			prev1 = temps1;
			a = temps1->data;
			temps1 = temps1->next;
		}
		}
		push2();
	}

}
void push2()
{
	if(tops2==NULL){
		news2 = (struct stack2 *)malloc(sizeof(struct stack2));
		news2->next = NULL;
		news2->data = a;
		tops2 = news2;
	}
	else{
		news2 = (struct stack2 *)malloc(sizeof(struct stack2));
		news2->next = NULL;
		news2->data = a;
		news2->next = tops2;
		tops2 = news2;
	}
	dis();
}
void pop2()
{
	if(tops2==NULL){
		printf("\nEmpty list!!");
	}
	else{
		if(tops1==NULL){
			news1 = (struct stack1 *)malloc(sizeof(struct stack1));
		news1->data = tops2->data;
		news1->next = NULL;
		tops1 = news1;
		}
		else{
			news1 = (struct stack1 *)malloc(sizeof(struct stack1));
			temps2 = tops2;
			while(temps2!=NULL){
			if(temps2->next==NULL){
				prev2->next = NULL;
				break;
			}
			prev2 = temps2;
			temps2 = temps2->next;
		}
		news1->data = temps2->data;
		news1->next = tops1;
		tops1 = news1;
		}
	}
}
void dis()
{
	if(tops1==NULL){
		printf("\nEmpty list!!");
	}
	else{
		for(temps1=tops1;temps1!=NULL;temps1=temps1->next){
		printf("\n%d\n",temps1->data);
	}
	}
}

