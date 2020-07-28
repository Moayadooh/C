#include <stdio.h>

void main()
{
	int a[10] = {3,4,56,23,35,45,23,3,34,100};
	int *p[10];
	int i;
	for (i=0;i<10;i++)
		p[i] = &a[i];
	
	for (i=0;i<10;i++)
		printf("\n%d",*p[i]);
	
}

