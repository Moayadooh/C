#include <stdio.h>
void	diff(int [],int *,int *,int, int *);
int main ()
{
	int input[10];
	int i=0, big, small, total, difference ;
	printf("Enter 10 numbers:");
	while(i<10){
		scanf("%d",&input[i]);
		i++;		
	}
	
	small=big=input[0];
	diff(input,&small,&big,10,&difference);
	
 	printf("\ndifference = %d",difference);
 	return 0;
 }
 
void diff(int x[],int  *s,int  *b, int num,int *d)
{
	int c=0;
	while(c<num){
		if(x[c]<*s){
			 *s=x[c];			
		}else if(x[c]> *b){
			*b=x[c];
		}
		c++;
	}
	*d=*b-*s;    }
	

