#include <stdio.h>
//fn declaration
void Mywhile (int );
int main(){
	int i=1,n;
	printf("Enter a number:");
	scanf("%d",&n);	
	printf("\nExample of while loop:\n");
	//calling function MyWhile
	Mywhile(n);
	printf("\nExample of do..while loop:\n");
	int j=1;
	do{
		printf("%d\n",j);
		j++;
	}while(j<=n);
	printf("\nExample of for loop:\n");		
	int k;	
	for(k=1;k<=n;k++){
		printf("%d\n",k);
	}	
	
	return 0;
}
//define funtion
void Mywhile (int n){
	int i=1;
	while(i<=n){
		printf("%d \n",i);
		i++;
	}

}















