#include <stdio.h>

void main()
{
	int a=10;
	int *p;
	int **q;
	int ***r;
	p = &a;
	q = &p;
	r = &q;
	printf("\n%d",a);
	printf("\n%d",*p);
	printf("\n%d",**q);
	printf("\n%d",***r);
}
