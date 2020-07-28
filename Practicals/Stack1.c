#include<stdio.h>
int top=-1;
int num,af;
int array[6];
int array2[6];
int i,j;
int top2;

void push();
void pop();
void list_stack();
void list();
void main()
{
	int ch,a=1;
	while(a==1){
    	printf("\nEnter choice:\n");
    	printf("1. Push\n");
    	printf("2. Pop\n");
    	printf("3. List stack\n");
    	printf("4. Exit\n");
    	printf("5.\n");
    	scanf("%d",&ch);
    	switch(ch)
    	{
    		case 1:push();break;
    		case 2:pop();break;
    		case 3:list_stack();break;
    		case 4:a = 0;break;
    		case 5:list();break;
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
		if(top==-1){
			printf("Enter a number:");
	    	scanf("%d",&num);
	    	top++;
	    	array[top] = num;
		}
		else{
			printf("After what number you want to enter:");
			scanf("%d",&af);
			for(i=top;i>=-1;i--){
				if(array[i]==af){
					for(j=5;j!=i;j--){
						array2[j] = array[j];
					}
					printf("Enter a number:");
	            	scanf("%d",&num);
	            	array[i+1] = num;
	            	top = i+1;
	            	break;
				}
				else if(i==-1){
					printf("Number is not exist\n");
				}
			}
		}
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
void list()
{
	if(top<0){
		printf("\nStack is empty!!\n");
	}
	else{
		printf("stack two:");
    	for(j=5;j!=i;j--){
    		printf("\n%d\n",array2[j]);
    	}
	}
}
