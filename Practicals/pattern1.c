#include<stdio.h>
int main(){
	int i,j;
	char a[]="OMAN";
	
	for(i=1;i<5;i++){
		j=0;
		while(j<i){
			printf("%c",a[j]);
			j++;
		}
		printf("\n");
	}
	return 0;
}
