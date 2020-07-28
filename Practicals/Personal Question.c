#include<stdio.h>
int main(){
	char a[10],g[2];
	int age;
	float w , h;
	
	printf("Enter your name\n");
	scanf("%s", &a );
	printf("Enter your age\n");
	scanf("%d", &age);
	printf("Enter your gender\n");
	scanf("%s" , &g);
	printf("Enter your weight\n");
	scanf("%f", &w);
	printf("Enter your height\n");
	scanf("%f", &h);	
	printf("Name is %s\n",a);
	printf("Age is %d\n",age);
	printf("Gender is %s\n",g);
	printf("Weight in KG is %f\n",w);
	printf("Height in CM is %f\n",h);
	
	return 0 ;
	
}

