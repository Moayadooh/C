#include<stdio.h>
struct parent
{
	char name[30];
	int age;
};
void main()
{
	struct parent father = {"Salim",40};
	struct parent mother = {"Muna",38};
	
	printf("\nMy father name is %s and he is %d year old.",father.name,father.age);
	printf("\nMy mother name is %s and she is %d year old.",mother.name,mother.age);
}
