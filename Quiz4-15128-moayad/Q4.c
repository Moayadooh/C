/*
Name: moayad
ID: 15128
Prg: Quiz4
*/
#include<stdio.h>
float addNumbers(float,float,float);
int main()
{
	FILE *fptr1,*fptr2;
	fptr1 = fopen("input.txt","r");
	fptr2 = fopen("output.txt","w");
	int i=0;
	float num1[20],num2[20],t;
	fprintf(fptr2,"No:1\tNo:2\tsum\n");
	while(!feof(fptr1)){
		fscanf(fptr1,"%f %f",&num1[i],&num2[i]);
		addNumbers(num1[i],num2[i],t);
		t = num1[i]+num2[i];
		fprintf(fptr2,"%.2f\t%.2f\t%.2f\n",num1[i],num2[i],t);
		i++;
	}
	fclose(fptr1);
	fclose(fptr2);
}
float addNumbers(float n1,float n2,float s)
{
	s = n1 + n2;
	return n1;
	return n2;
}


