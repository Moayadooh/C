#include<stdio.h>
int sum(int ,int);
int main(){
	int a ,b ,c;
	printf("Enter a\n");
	scanf("%d", &a);
	printf("Enter b\n");
	scanf("%d", &b);
	c = sum(a ,b);
	printf("Result : %d", c);
	return 0;
}
int sum(int x ,int y)
{
	int l ;
	l = x + y;
//	return l;
}
