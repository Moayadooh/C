/*
ID  : 15128
Name: Moayad Salim AL Falahi
*/
#include<stdio.h>
int main(){
	int CollegeID , phNO ;
	char StudentName[20] , AdvisorName[20];
	float discount , StudentAdvance , Standardfee=1000.00, feeafterdiscount , servicecharge=5000.00, total, Balance;
	
	printf("Enter College ID\n");
	scanf("%d", &CollegeID);
	printf("Enter your Name\n");
	scanf("%s", & StudentName);
	printf("Enter Phone Number\n");
	scanf("%d", & phNO);
	printf("Enter your Acadmic Advisor\n");
	scanf("%s", & AdvisorName);
	printf("Enter your Advance\n");
	scanf("%f", & StudentAdvance);
	discount = 500*5/100 + 500*20/100;                  //calculate discount
	feeafterdiscount = Standardfee - discount;          //calculate Fee after discount
	total = feeafterdiscount + servicecharge;           //calculate total
	Balance = total - StudentAdvance;                   //calculate balance
	printf("--------------------------------------------------------------------------------\n");
	printf("********************************************************************************\n");
	printf("\t\t\tMuscat College Registration Receipt\n");
	printf("********************************************************************************\n");
	printf("--------------------------------------------------------------------------------\n");
	printf("\nStudent Information\n");
	printf("____________________________________________________________\n");
	printf("College ID        :     %d\n", CollegeID);
	printf("Name              :     %s\n", StudentName);
	printf("Phone Number      :     968 %d\n", phNO);
	printf("Acadmic Advisor   :     %s\n", AdvisorName);
	printf("\n\nPayment Details for 2 Semester\n");
	printf("____________________________________________________________\n");
	printf("StandardFee       :     %.3fOMR\n", Standardfee);
	printf("Fee after discount:     %.3fOMR\n", feeafterdiscount);
	printf("Service Charge    :     %.3fOMR\n", servicecharge);
	printf("Total             :     %.3fOMR\n", total);
	printf("Advance           :     %.3fOMR\n", StudentAdvance);
	printf("Balance           :     %.3fOMR", Balance);
	
	return 0;
}
