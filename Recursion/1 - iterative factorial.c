#include<stdio.h>
int fact(int);
void main()
{
	int num ,factnum;
	printf("\nEnter integer number :\n");
	scanf("%d",&num);
	factnum = fact(num);
	printf("\nfactorial number for %d is : %d",num,factnum);
}
int fact(int num)
{
	int i ,fact=1;
	for(i=num;i>1;i--){
		fact = fact*i;
	}
	return fact;
}
