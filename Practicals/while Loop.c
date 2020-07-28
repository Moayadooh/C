#include<stdio.h>
int main(){
	int i = 1 ,num ;
	
	printf("Enter the number\n");
	scanf("%d", & num);
	while(i<= num){
		printf("%d\n", i);
		i=i+1;
	}
		
		return 0;
}
