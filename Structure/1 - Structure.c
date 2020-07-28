#include<stdio.h>
#include<string.h>
struct car{
	char name[10];
	char company[10];
	int year;
};
void main()
{
	struct car my = {"corola","toyota",2013};
	printf("car name is %s\n",my.name);
	printf("car company is %s\n",my.company);
	printf("car released at %d\n\n\n",my.year);
	
	strcpy(my.name,"x-trail");
	strcpy(my.company,"nissan");
	my.year = 2008;
	printf("car name is %s\n",my.name);
	printf("car company is %s\n",my.company);
	printf("car released at %d\n",my.year);
}
