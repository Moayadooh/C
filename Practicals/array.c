#include<stdio.h>
int main(){
	int integer ,i ,r[100] ,l=0;
	
	printf("enter num of integer\n");
	scanf("%d", & integer);
	printf("enter %d integer\n",integer);
	
	for(i=0;i<integer;i++){
		scanf("%d", & r[i]);
		l = l+r[i];
	}
	printf("%d", l);
	
	return 0;
}


/*
#include<stdio.h>
int main(){
	int n, sum=0, c, array[100];
	
	printf("enter the number of integer you want to add\n");
	scanf("%d", &n);
	printf("enter %d integer\n",n);
	
	for(c=0; c<n; c++){
		scanf("%d", & array[c]);
		sum = sum + array[c];
	}
	printf("sum = %d\n", sum);
	
	return 0;
}
*/
