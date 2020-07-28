#include<stdio.h>
int main(){
	int i,medals[7];
	float points[7],total=0,average;
	
	for(i=0;i<7;i++){
		printf("Enter the Medals\n");
		scanf("%d",&medals[i]);
		printf("Enter the Points\n");
		scanf("%f",&points[i]);
	}
	for(i=0;i<7;i++){
		if(points[i]>8.0){
			printf("Medals %d Points %f is above 8.0\n",medals[i],points[i]);
		}
		total = total + points[i];
	}
	average = total/7;
	printf("Average Points is : %f\n",average);
	for(i=0;i<7;i++){
		if(points[i]>average){
			printf("Medals %d and Points %f is more than average",medals[i],points[i]);
		}
	}
	return 0;
}
