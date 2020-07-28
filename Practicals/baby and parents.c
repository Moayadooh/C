#include<stdio.h>
struct parents{
	char name[20];
	int age;
};
struct baby{
	char name[10];
	int year;
	struct parents f;
	struct parents m;
};
void dis(struct baby);
void main()
{
	struct baby b1;
	dis(b1);
}
void dis(struct baby s1)
{
	printf("\nEnter baby name :\n");
	scanf("%s",&s1.name);
	printf("\nEnter baby year :\n");
	scanf("%d",&s1.year);
	printf("\nEnter father name :\n");
	scanf("%s",&s1.f.name);
	printf("\nEnter father age :\n");
	scanf("%d",&s1.f.age);
	printf("\nEnter mother name :\n");
	scanf("%s",&s1.m.name);
	printf("\nEnter mother age :\n");
	scanf("%d",&s1.m.age);
}
