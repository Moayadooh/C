#include<stdio.h>
#define maxsize 100
void scan(int,int []);
void main()
{
	int size,i,data[maxsize];
	printf("Enter list size\n");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Enter the number :\t");
		scanf("%d",&data[i]);
	}
	scan(size,data);
	printf("Arrange of data :\n");
	for(i=0;i<size;i++){
		printf(" %d",data[i]);
	}
//	854627   584627 548267 452678 425678 245678
}
void scan(int size,int data[])
{
	int i,temp;
	while(size>1)
	{
		size--;
		for(i=0;i<size;i++){
		if(data[i]>data[i+1]){
			temp = data[i];
			data[i] = data[i+1];
			data[i+1] = temp;
		}
	  }
	}
}
