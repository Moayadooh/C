#include<stdio.h>
int main(){
	
	char user[10], ali[10];
	int password ,option ,balance=0 ,deposit ,transfer ,transaction=1 ,copy;  //if(user == 'ali')     scanf("%s", &user);
	FILE *fptr;
	
	printf("Enter your user name\n");
	scanf("%s", &user);
	if(user == ali)
	{
	printf("Pleace enter your 'password'\n");
	scanf("%d", & password);
	
	if(password != 1231)
	{
		printf("INVALID PIN\n");
		printf("two traying left\n");
		scanf("%d", & password);
		if(password != 1231)
		{
			printf("INVALID PIN\n");
			printf("one traying left\n");
			scanf("%d", & password);
			if(password != 1231)
			{
				printf("INVALID PIN");
				return 0;
			}
		}
	}
	}
		while(transaction == 1)
   {
    	printf("\nchoice a service :\n\n");
		printf("1 - Check balance\n");
		printf("2 - Deposit\n");
		printf("3 - Transfer\n");
		scanf("%d", & option);
	
	if(option == 1)
	{
		printf("your balance is\n%d OMR", balance);
	}
	else if(option == 2)
	{
		printf("How much OMR you want to deposit?\n");
		scanf("%d", & deposit);
		if(deposit > 0)
		{
		balance = deposit + balance;	
		}
		else
		{
			printf("\nInvalid deposit");
			deposit = transfer + balance;
		}
	}
	else if(option == 3)
	{
		printf("How much OMR you want to transfer?\n");
		scanf("%d", & transfer);
		if(transfer <= balance && transfer > 5)
		{
			balance = balance - transfer;
		}
		else if(transfer <= 5)
		{
			printf("you most transfer more than 5 OMR");
			transfer = deposit - balance;
		}
		else
		{
			printf("\nyou dont have enough money");
			transfer = deposit - balance;
		}
	}
	transaction=0;
	while(transaction != 1 && transaction != 2)
	{
		printf("\n\nDo you want another transaction?\n1 - YES\n2 - NO\n");
		scanf("%d", & transaction);
		if(transaction!= 1 && transaction!= 2)
		{
			printf("press 1 or 2\n");
			
		}
		}
	
		if(transaction == 2)
	{
		fptr = fopen("txtfile.txt","w");
	    fprintf(fptr,"your balancce is %d OMR\n", balance);
	    fprintf(fptr,"you deposit %d OMR\n", deposit);
	    fprintf(fptr,"you transfer %d OMR\n", transfer);
	    fclose(fptr);
	    printf("Thankyou\n");
	    printf("copying....");
	    }
		
      }
	
	return 0;
	}
