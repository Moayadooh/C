#include<stdio.h>
#define maxsize 50
void main()
{
	void sort(int,int []);
	int size,i,num[maxsize];
	printf("\nEnter list size :\n");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("\nEnter the number :\t");
		scanf("%d",&num[i]);
	}
	sort(size,num);
	for(i=0;i<size;i++){
		printf(" %d",num[i]);
	}
	
}
void sort(int size,int num[])
{
	int a,b,temp;
	for(a=1;a<size;a++)
	{
		temp = num[a];
		b = a-1;
		
		do{
			num[b+1] = num[b];
			b--;
		}while((temp<num[b])&&(b>=0));
		num[b+1] = temp;
	}
}
