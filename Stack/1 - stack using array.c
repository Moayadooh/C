#include<stdio.h>
#include<stdlib.h>
struct stack{
	int a[5];
	int top;
}st;
int stfull(){
	if(st.top==4)
	return 1;
	else
	return 0;
}
int stempty(){
	if(st.top==-1)
	return 1;
	else
	return 0;
}
void push(int item){
	st.top++;
	st.a[st.top] = item;
}
void pop(int item){
	item = st.a[st.top];
	printf("\nthe item poped is : %d",item);
	st.top--;
}
void dis(){
	int i;
	for(i=st.top;i>=0;i--){
		printf("\n%d\n",st.a[i]);
	}
}
void main()
{
	int item;
	st.top = -1;
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
			case 1:
				if(stfull())
				printf("\nStack is full!!\n");
				else{
					printf("\nEnter item :");
					scanf("%d",&item);
					push(item);
				}
				break;
			case 2:
				if(stempty())
				printf("\nStack is empty!!\n");
				else
				pop(item);
				break;
			case 3:
				if(stempty())
				printf("\nStack is empty!!\n");
				else
				dis();
				break;
			case 4:exit(0);
		}
		printf("\nDo you want to continue??\n");
		ans = getche();
	}while(ans == 'y' || ans =='Y');
}
