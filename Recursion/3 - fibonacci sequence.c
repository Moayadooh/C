#include<stdio.h>
void main()
{
	int fib(int);
	int num;
	printf("\nEnter number of fibonacci sequence :\t");
	scanf("%d",&num);
	printf("\nfibonacci sequence for %d is : %d",num,fib(num));
}
int fib(int num)
{
	if(num <=1)
	return num;
	
	else
	return (fib(num-1)+fib(num-2));
}
