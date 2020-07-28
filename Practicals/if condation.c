#include<stdio.h>
int main(){
	int mark;
	printf("Enter the Marks");
	scanf("%d", &mark);
	if(mark>=90){
		printf("A+");
	}
	else if(mark>=80){
		printf("A-");
	}
	else if(mark>=60){
		printf("B+");
	}
	else if(mark>=50){
		printf("B-");
	}
	else{
		printf("F");
	}
	return 0;
}
