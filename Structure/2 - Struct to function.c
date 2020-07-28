#include<stdio.h>
struct dream{
	char name[10];
	char country[10];
};
void display(struct dream);
void main()
{
	struct dream team = {"barcelona","spain"};
	display(team);
}
void display(struct dream team)
{
	printf("\nmy best football team is %s\n",team.name);
	printf("foot ball clup barcelona is %s team",team.country);
}
