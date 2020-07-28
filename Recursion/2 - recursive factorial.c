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
	if(num==0)
	return 1;
	
	else
	return (num*fact(num-1));
}
