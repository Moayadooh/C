#include<stdio.h>
main()
{
	int a;
	int b=10;
	float c=5.2;
	
	printf("address of a is %d\n", &a);
	printf("address of b is %u\n", &b);
	printf("address of c is %u\n", &c);
	
	printf("------------------------\n\n\n");
	
	int *p1;
	p1 = &a;
	
	int *p2 = &b;
	
	float *p3 = &c;
	
	printf("value of p1 is %u\n",p1);
	printf("value of a is %d\n\n",*p1);
	
	printf("value pf p2 is %u\n",p2);
	printf("value of b is %d\n\n",*p2);
	
	printf("value of p3 is %u\n",p3);
	printf("value of c is %f\n\n",*p3);
	
	getch();
}
