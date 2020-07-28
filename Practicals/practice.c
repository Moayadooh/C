#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//function declaration
void f1_cal(float *,float *,float *);
float f2_calTax(float , float );


int main(){
	int i;
	char machineId[2][10];
	float incomeOfA[3],incomeOfB[3],ExpenseOfA[3],ExpenseOfB[3];
	float incomeTotal=0.0,expenseTotal=0.0,taxedAmount=0.0,taxPerAmount=0.0, taxPer=3.5;

	printf("\nEnter A\'s CODE:");
	scanf("%s",&machineId[0]);
	printf("\nEnter B\'s CODE:");
	scanf("%s",&machineId[1]);
	//Read and calculate income of A
	printf("\nEnter A\'s income (Industry work, House Construction and other incomes respectively): \n");
	i=0;
	while(i<2){
		scanf("%f",&incomeOfA[i]);
		incomeTotal+=incomeOfA[i];
		i++;
	}
	//Read and calculate income of B
	printf("\nEnter B\'s income (Industry work, House Construction and other incomes respectively): \n");
	i=0;
	while(i<2){
		scanf("%f",&incomeOfB[i]);
		incomeTotal+=incomeOfB[i];
		i++;
	}
	//Read and calculate expenses of A
	printf("\nEnter A\'s expenses for (Maintenance, Repair and Health respectively): \n");
	i=0;
	while(i<2){
		scanf("%f",&ExpenseOfA[i]);
		expenseTotal+=ExpenseOfA[i];
		i++;
	}
	//Read and calculate expenses of B
	printf("\nEnter B\'s expenses for (Maintenance, Repair and Health respectively): \n");
	i=0;
	while(i<2){
		scanf("%f",&ExpenseOfB[i]);
		expenseTotal+=ExpenseOfB[i];
		i++;
	}
	//finds Amount to apply taxPer
	f1_cal(&incomeTotal,&expenseTotal,&taxedAmount);
	//finds taxPer Amount
	taxPerAmount=f2_calTax(taxedAmount,taxPer);
// file output
	printf("Combine Tax calculation\n");
	printf("********************************************************\n");
	printf("\t\tA  CODE :%s  B CODE :%s\t  Total\n",machineId[0],machineId[1]);
	printf("Type of Income\t\tAmount\t\tAmount\t \n");
	printf("Industry work\t\t%.2f\t\t%.2f\t \n",incomeOfA[0],incomeOfB[0]);
	printf("Home construction\t%.2f\t\t%.2f\t \n",incomeOfA[1],incomeOfB[1]);
	printf("\t \t\t\tTotal Income(a):\t%.2f\n",incomeTotal);
	printf("Type of Expenses\tAmount\t\tAmount\t \n");
	printf("Maintenance\t\t%.2f\t\t%.2f\t \n",ExpenseOfA[0],ExpenseOfB[0]);
	printf("Repair\t%.2f\t\t%.2f\t \n",ExpenseOfA[1],ExpenseOfB[1]);
	printf("\t \t\t\tTotal Expenses(b):\t%-10.2f\n",expenseTotal);
	printf("\t \t\t\tTotal Amount(a-b):\t%-10.2f\n",taxedAmount);
	printf("\t \t\t\tPercentage of taxPer:\t%-10.2f%\n",taxPer);
	printf("\t\t\t\tAmount of taxPer:\t%-10.2f\n",taxPerAmount);


	FILE *wp;
	wp=fopen("output.txt","w");
	fprintf(wp,"Combine Tax calculation\n");
	fprintf(wp,"*********************************\n");
	fprintf(wp,"Total Income: %.2f\n",incomeTotal);
	fprintf(wp,"Total Expenses: %.2f\n",expenseTotal);
	fprintf(wp,"taxPer percentage: %.2f%\n",taxPer);
	fprintf(wp,"Total taxPer amount: %.2f\n",taxPerAmount);
	fclose(wp);
	return 0;
}
//calculate total income - expenses
void	f1_cal(float *i, float *e,float *TA){
	*TA=*i-*e;
}
//calculate taxPer amt
float f2_calTax(float taxPeredAmount, float taxPer){
 	float taxPerAmount=taxPeredAmount*taxPer/100;
 	return taxPerAmount;
}

