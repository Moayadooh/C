#include<stdio.h>
int main(){
	int id[10] ,salary[10] ,i ,n,total=0,m;
	
	for(i=0; i<5; i++){
		printf("Enter Employee ID\n");
		scanf("%d", & id[m]);
		printf("Enter Employee Salary\n\n");
		scanf("%d", &salary[n]);
		total+=salary[n];
	}
	printf("Total salary of Employee : %d",total);
	
	
	return 0;
}
