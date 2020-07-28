 #include<stdio.h>
int fn_compare(int,int);
int main()
{
	FILE *ptr;
	FILE *ptr2;
	ptr = fopen("start.txt","r");
	ptr2 = fopen("result.txt","w");
	int result;
	int i=0;
	int number1[20],number2[20];
	fprintf(ptr2,"smallest age\n");
	while(!feof(ptr))
	{
		fscanf(ptr,"%d %d",&number1[i], &number2[i]);
		result = fn_compare(number1[i],number2[i]);
		fprintf(ptr2,"%d\n",result); //may %d \t %d \t %d \t \n
		i++;
	}
	fclose(ptr);
	fclose(ptr2);
	return 0;
}
int fn_compare(int nf1, int nf2){
	if(nf1<nf2)
	return nf1;
	else
	return nf2;
}
