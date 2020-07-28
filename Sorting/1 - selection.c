#include<stdio.h>
void selection(int ,int []);
void main()
{
	int num[100] ,size ,i;
	printf("\nEnter number of integer : ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\nEnter the number : ");
		scanf("%d",&num[i]);
	}
	selection(size,num);
	for(i=0;i<size;i++){
		printf("\n%d\n",num[i]);
	}
}
void selection(int size ,int num[])
{
	int a ,b ,smallest ,temp;
	for(a=0;a<size;a++){
		smallest = a;
		for(b=a+1;b<size;b++){
			if(num[b]<num[smallest]){
				smallest = b;
			}
		}
		temp = num[a];
		num[a] = num[smallest];
		num[smallest] = temp;
	}
}
