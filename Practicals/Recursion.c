#include<stdio.h>

int n = 100,z = 100;

int fun(int);
void main()
{
	int a;
	a = fun(z);
	printf("%d",a);
}
int fun(z)
{
	if(n==10)
	return z;
	else
	n = n-10;
	return fun(z+n);
}
