#include<stdio.h>
int main(){
	int n,v=0,r,c=1;
	
	scanf("%d",&n);
	
	while(c<n){
		    c++;
			for(r=v;r<c;r++){
				printf("$");
			}
			printf("\n");
			v--;
		}
		return 0;
}
