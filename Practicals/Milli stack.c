#include<stdio.h>
#include<conio.h>
#define size 10
int top=-1;
int astack[10];
int number;
int i;

void push();
void pop();
void list();
int main()
{
	int ch=1;
	int choice;
	while(ch==1){
		
	
    	printf("\nSelect from the menu\n");
    	printf("1 - Push\n");
    	printf("2 - Pop\n");
    	printf("3 - List Stack\n");
    	printf("4 - Exit\n");
    	printf("Enter your choice:");
    	scanf("%d",&choice);
    	switch(choice){
    		case 1:push();break;
    		case 2:pop();break;
    		case 3:list();break;
    		case 4:ch=0;break;
    		default:printf("Invalid entry!");
		}
	}
	return 0;
}
void push()
{
	if(top+1==size){
		printf("Stack is full!\n");
	}
	else{
		printf("Enter the nmuber to inser:");
		scanf("%d",&number);
		top++;
		astack[top] = number;
	}
}
void pop()
{
	if(top<0){
		printf("Stack is empty\n");
	}
	else{
		astack[top] = 0;
		top--;
	}
}
void list()
{
	if(top<0){
		printf("Stack is empty\n");
	}
	else{
		for(i=top;i>=0;i--){
			printf("\n%d\n",astack[i]);
		}
	}
}
