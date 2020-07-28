/*
Name:Moayad Salim
ID:15128
Purpose:HOT2
*/
#include<stdio.h>
float f1_taxed(float *,float *,float *);
float f2_taxAmt(float ,float ,float);
int main(){
	char id[2][10];
	float salary[3],allowance[3],otherincome[3];
	float family[3],education[3],health[3];
	float wtotexpence=0.0,htotexpence=0.0,wtotincome=0.0,htotincome=0.0,tax=3.5;
	float totincome=0.0,totexpence=0.0,totamount=0.0,taxamont=0.0,p,o,l;
	
	printf("Enter Huspand ID\n");
	scanf("%s",&id[0]);
	printf("Enter Wife ID\n");
	scanf("%s",&id[1]);
	
	printf("Enter Husband Salary\n");
	scanf("%f",&salary[0]);
	printf("Enter Husband Allowance\n");
	scanf("%f",&allowance[0]);
	printf("Enter Husband Other Income\n");
	scanf("%f",&otherincome[0]);
	htotincome=salary[0]+allowance[0]+otherincome[0];
	
	printf("Enter Husband Family\n");
	scanf("%f",&family[0]);
	printf("Enter Husband Education\n");
	scanf("%f",&education[0]);
	printf("Enter Husband Health\n");
	scanf("%f",&health[0]);
	htotexpence=family[0]+education[0]+health[0];
	
	printf("Enter Wife Salary\n");
	scanf("%f",&salary[1]);
	printf("Enter Wife Allowance\n");
	scanf("%f",&allowance[1]);
	printf("Enter Wife Other Income\n");
	scanf("%f",&otherincome[1]);
	wtotincome=salary[1]+allowance[1]+otherincome[1];
	
	printf("Enter Wife Family\n");
	scanf("%f",&family[1]);
	printf("Enter Wife Education\n");
	scanf("%f",&education[1]);
	printf("Enter Wife Health\n");
	scanf("%f",&health[1]);
	wtotexpence=family[1]+education[1]+health[1];
	
	totincome=htotincome+wtotincome;
	totexpence=htotexpence+wtotexpence;
	
	totamount=f1_taxed(&p,&o,&l);
//	totamount=totincome-totexpence;
	
//	taxamont=totamount*tax/100;
	taxamont=f2_taxAmt(totincome,taxamont,tax);
	
	printf("Combine Annual Declaration\n");
	printf("***********************************************************\n");
	printf("Husband ID: %s\t\t\t\tWife ID: %s\tTotal\n",id[0],id[1]);
	printf("Type of income\t\tAmount\t\tAmount\n");
	printf("Salary:\t\t%.2f\t\t%.2f\n",salary[0],salary[1]);
	printf("Allowance:\t\t%.2f\t\t%.2f\n",allowance[0],allowance[1]);
	printf("Other Incomes\t\t%.2f\t\t%.2f",otherincome[0],otherincome[1]);
	printf("\t\t\t\t\t\tTotal Income%.2f\n\n",totincome);
	printf("Type of Expenses\t\tAmount\t\tAmount\n");
	printf("Family\t\t%.2f\t\t%.2f\n",family[0],family[1]);
	printf("Education\t\t%.2f\t\t%.2f\n",education[0],education[1]);
	printf("Health\t\t%.2f\t\t%.2f\n\n",health[0],health[1]);
	printf("\t\t\t\t\t\tTotal Expenses: %.2f\n",totexpence);
	printf("\t\t\t\t\t\tTaxed Amount: %.2f\n",totamount);
	printf("\t\t\t\t\t\tPercentage of tax: %.2f\n",tax);
	printf("\t\t\t\t\t\tTaxed Amount of Tax: %.2f",taxamont);
	
	FILE *ou;
	ou=fopen("output,txt","w");
	fprintf(ou,"Total Income%.2f\n\n",totincome);
	fprintf(ou,"Total Expenses: %.2f\n",totexpence);
	fprintf(ou,"Percentage of tax: %.2f\n",tax);
	fprintf(ou,"Taxed Amount of Tax: %.2f",taxamont);
	fclose(ou);
	
	return 0;
}
float f1_taxed(float *i,float *e,float *g){
//	float *g;
	*g = *i - *e;
	return *g;
}
float f2_taxAmt(float t,float u,float h){
	h=t*3.5/100;
	return h;
}
