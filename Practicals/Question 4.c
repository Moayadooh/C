#include<stdio.h>
void dif(int [],int *,int *,int *);
int main(){
	int i,num[10],big,small,difference,total=0;
	
	printf("Enter ten Numbers\n");
	for(i=0;i<10;i++){
		scanf("%d",&num[i]);
	}
	big=small=num[0];
	dif(num,&big,&small,&difference);
	printf("Difference is : %d\n",difference);
	for(i=0;i<10;i++){
		total = total + num[i];
	}
	printf("total of all number is : %d",total);
	
	return 0;
}
void dif(int n[],int *b,int *s,int *d){
	int i;
	
	for(i=0;i<10;i++){
		if(n[i]>*b){
			*b=n[i];
		}
		else if(n[i]<*s){
			*s=n[i];
		}
	}
	*d = *b - *s;
}
