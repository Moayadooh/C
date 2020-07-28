#include<stdio.h>
struct item{
	char name[10];
	int age;
	char gender[1];
};
struct family{
	struct item baby;
	struct item mother;
	struct item father;
}info;
void display(struct family);
void main()
{
	printf("\nEnter baby name :\n");
	scanf("%s",&info.baby.name);
	printf("Enter baby gender :\n");
	scanf("%s",&info.baby.gender);
	printf("Enter baby father name :\n");
	scanf("%s",&info.father.name);
	printf("Enter baby father age :\n");
	scanf("%d",&info.father.age);
	printf("Enter baby mother name :\n");
	scanf("%s",&info.mother.name);
	printf("Enter baby mother age :\n");
	scanf("%d",&info.mother.age);
}
void display(struct family info)
{
	printf("\n\nbaby name is : %s\n",info.baby.name);
	printf("bay gender is : %s\n",info.baby.gender);
	printf("baby father name is :%s\n",info.father.name);
	printf("baby father age is :%d\n",info.father.age);
	printf("baby mother name is :%s\n",info.mother.name);
	printf("baby mother age is :%d\n",info.mother.age);
}
