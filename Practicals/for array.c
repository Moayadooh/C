#include<stdio.h>
int main(){
	int i ,balls[5] ,totalballs=0;
	
	for(i=0; i<5; i++){
		printf("how many ball you eat on day %d? \n",i+1);
		scanf("%d", &balls[i]);
	}
	for(i=0; i<5; i++){
		totalballs+=balls[i];
	}
	
	int avg=totalballs/5;
	printf("\nyou ate %d balls total, thats an average of %d per day!\n", totalballs ,avg);
	
	return 0;
}
