#include<stdio.h>
int main()
{
	int medal[7];
	float point[7];
	float total;
	float average;
	int k=0;
	while(k<7){
		printf("Enter the medals");
		scanf("%d", &medal[k]);
		printf("Enter the points");
		scanf("%f", &point[k]);
		k=k+1;
	}
		//print medals and points more than 8.0
	for(k=0;k<7;k++){
		if(point[k] > 8.0){
			printf("%d\t%f",medal[k],point[k]);
		}	
		total=total+point[k];	
	}
//average
int j=0;
	while(j<7){
		total=total+point[j];	
j+=1;
	}

	average=total/7;
	printf("Average is %f\n",average);
	//print medals and points more than average
	for(k=0;k<7;k++){
		if(point[k]>average){
			printf("%d\t%f",medal[k],point[k]);
		}		
	}	
	
	return 0;	
}
