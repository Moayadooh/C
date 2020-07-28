#include<stdio.h>
struct car{
	char type[20];
	int year;
};
void main()
{
	struct car c1 = {"Mercedees",2007};
	struct car c2 = {"Lexus",2017};
	
	printf("\nThe car name is %s\n",c1.type);
	printf("the year is %d\n",c1.year);
	printf("The car name is %s\n",c2.type);
	printf("the year is %d",c2.year);
}
