#include<stdio.h>
void sort(int [],int,int);
int partition(int [],int,int);
void swap(int [],int,int);
void main()
{
	int numel,i,data[100];
	printf("\nEnter how many number you want to enter : ");
	scanf("%d",&numel);
	printf("\n");
	for(i=0;i<numel;i++){
		printf("Enter the number : ");
		scanf("%d",&data[i]);
	}
	sort(data,0,numel-1);
	printf("\nyour sort is :\n\n");
	for(i=0;i<numel;i++){
		printf("%d ",data[i]);
	}
}
void sort(int data[],int first,int last){
	int pivotlocation;
	
	if(first<last){
		pivotlocation = partition(data,first,last);
		sort(data,first,pivotlocation-1);
		sort(data,pivotlocation+1,last);
	}
}
int partition(int data[],int first,int last){
	int pivot,smallindex,index;
	
	pivot = data[first];
	smallindex = first;
	for(index=first+1;index<=last;index++){
		if(data[index]<pivot){
			smallindex++;
			swap(data,smallindex,index);
		}
	}
	swap(data,first,smallindex);
	
	return smallindex;
}
void swap(int data[],int first,int last){
	int temp;
	
	temp = data[first];
	data[first] = data[last];
	data[last] = temp;
}
