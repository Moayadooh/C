#include<stdio.h>
int main(){
	int i,c,d;
	char h[10],a[10],b[10],f[10],e[10],g[10];
	
	printf("Enter your Name\n");
	scanf("%s", &b);
	printf("Enter your ID\n");
	scanf("%d", &i);
	printf("Enter your Subject 1 Name\n");
	scanf("%s", &e);
	printf("Enter your Subject 1 Code\n");
	scanf("%s", &a);
	printf("Enter your Subject 1 Credit\n");
	scanf("%d", &c);
	printf("Enter your Subject 2 Name\n");
	scanf("%s", &f);
	printf("Enter your Subject 2 Code\n");
	scanf("%s", &h);
	printf("Enter your Subject 2 Credit\n");
	scanf("%d", &d);
	printf("Enter your Acadmic Advisor Name\n");
	scanf("%s", &g);
	printf("\t\t\t\t\t\t\tMuscat College\n");
	printf("\t\t\t\t\t\t  Subject Registration form\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Name is %s\n" ,b);
	printf("Student ID is %d \n" ,i);
	printf("Total Subject = 2 \n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Subject Name \tCode \tCredit\n");
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("%s \t\t" ,e);
	printf("%s \t" ,a);
	printf("%d \t\n" ,c);
	printf("%s \t\t" ,f);
	printf("%s \t" ,h);
	printf("%d \t\n" ,d);	
	printf("------------------------------------------------------------------------------------------------------------------------\n");
	printf("Total Credit = %d\n",c+d);	
	printf("Acadmic Advisor:   %s\n",g);	
	
	return 0;
}
