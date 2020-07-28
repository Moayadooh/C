#include<stdio.h>
void ave(int [],float *,float *);
int main(){
	int i,num[5];
	float total=0,average;
	
	printf("Enter 5 number\n");
	for(i=0;i<5;i++){
		scanf("%d",&num[i]);
	}
	ave(num,&total,&average);
	printf("Average is = %f",average);
	
	return 0;
}
void ave(int n[],float *t,float *a){
	int i;
	
	for(i=0;i<5;i++){
		*t = *t + n[i];
	}
	*a = *t/5;
}
