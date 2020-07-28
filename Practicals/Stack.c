#include<stdio.h>
int top=-1;
int num;
int array[6];
int i;

void push();
void pop();
void list_stack();
void main()
{
	int ch,a=1;
	while(a==1){
    	printf("\nEnter choice:\n");
    	printf("1. Push\n");
    	printf("2. Pop\n");
    	printf("3. List stack\n");
    	printf("4. Exit\n");
    	scanf("%d",&ch);
    	switch(ch)
    	{
    		case 1:push();break;
    		case 2:pop();break;
    		case 3:list_stack();break;
    		case 4:a = 0;break;
    		default:printf("Pleas select 1,2,3 or 4!!\n");
    	}
	}
}
void push()
{
	if(top+1==6){
		printf("\nCant push!!\nStack is full!!\n");
	}
	else{
		printf("Enter a number:");
		scanf("%d",&num);
		top++;
		array[top] = num;
		list_stack();
	}
}
void pop()
{
	if(top<0){
		printf("\nCant pop!!\nStack is empty!!\n");
	}
	else{
		top--;
		if(top==-1)
		return;
		else
		list_stack();
	}
}
void list_stack()
{
	if(top<0){
		printf("\nStack is empty!!\n");
	}
	else{
		printf("\nStack list:");
		for(i=top;i>=0;i--){
			printf("\n%d\n",array[i]);
		}
	}
}
