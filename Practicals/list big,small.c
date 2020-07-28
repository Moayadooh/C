#include<stdio.h>
int main(){
	int i,num[6];
	int big,small;
	
	printf("Enter six numbers\n");
	for(i=0;i<6;i++){
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<6;i++){
		if(num[i]>5){
			printf("%d is more than 5\n",num[i]);
		}
		else if(num[i]<5){
			printf("%d is less than 5\n",num[i]);
		}
	}
	big=small=num[0];
	for(i=0;i<6;i++){
		if(num[i]>big){
			big = num[i];
		}
		else if(num[i]<small){
			small = num[i];
		}
	}
	printf("%d is biggest\n",big);
	printf("%d is smallest",small);
	
	return 0;
}
