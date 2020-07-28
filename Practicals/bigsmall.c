#include<stdio.h>
int bigsmall(int,int);
int main()
{
	FILE *fptr1,*fptr2;
	int num1[100],num2[100];
	int res,i=0;
	fptr1 = fopen("start.txt","r");
	fptr2 = fopen("result.txt","w");
	fprintf(fptr2,"Big - Small\n");
	while(!feof(fptr1)){
		fscanf(fptr1,"%d %d", &num1[i], &num2[i]);
		res = bigsmall(num1[i],num2[i]);
		fprintf(fptr2,"%d\n",res);
		i++;
	}
	fclose(fptr1);
	fclose(fptr2);
	return 0;
}
int bigsmall(va1,va2)
{
	if(va1 > va2){
	va1 = va1 - va2;
	return va1;
	}
	else
{
	va2 = va2 - va1;
    return va2;
}
}
