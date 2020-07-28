#include<stdio.h>
void file(int,char,char,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int,int);
int* mytrans();
int main(){
	char str,st;
	int password;
	int transaction = 1;
	int option;
	int acount;
	int balance = 5000;
	int select;
	int loans;
	int tick=0;
	int transfer;
	int acnu;
	int *arr;
	int fees;
	int tloans = 0;
	int h1=150 ,a1=50 ,e1=35 ,i1=20 ,w1=13;
	int h2=150 ,a2=50 ,e2=48 ,i2=20 ,w2=15;
	int h3=150 ,a3=50 ,e3=49 ,i3=20 ,w3=12;
	int h4=150 ,a4=50 ,e4=31 ,i4=22 ,w4=14;
	int h5=150 ,a5=50 ,e5=36 ,i5=24 ,w5=10;
	int h6=150 ,a6=50 ,e6=40 ,i6=22 ,w6=11;
	int h7=150 ,a7=50 ,e7=39 ,i7=21 ,w7=12;
	int h8=150 ,a8=50 ,e8=32 ,i8=20 ,w8=15;
	int h9=150 ,a9=50 ,e9=44 ,i9=23 ,w9=13;
	int h10=150 ,a10=50 ,e10=35 ,i10=25 ,w10=14;
	int h11=150 ,a11=50 ,e11=42 ,i11=24 ,w11=11;
	int h12=150 ,a12=50 ,e12=33 ,i12=22 ,w12=15;
	
	printf("Welcom to Online Banking System\n\n");
	do{
		printf("Enter your Account Number : ");
	    scanf("%d",&acnu);
	if(acnu != 12345){
		printf("Invalid Acount Number\n\n");
	}
	}while(acnu != 12345);
	do{
    	printf("Enter password : ");
    	scanf("%d", & password);
	if(password != 1211){
		printf("Invalid password\n\n");
	}
	}while(password != 1211);
	while(transaction == 1){
	printf("Select Transaction\n");
	printf("1 - check corrent balance\n");
	printf("2 - transfer\n");
	printf("3 - take a loan\n");
	printf("4 - pay monthly fees\n");
	printf("5 - check bills details\n");
	scanf("%d", & option);
	switch(option)
	{
		case 1:
		printf("your balance is %d OMR\n", balance);
		break;
		case 2:
		arr=mytrans();
		if((balance - *arr) < 0){
			printf("you dont have enogh money\n");
		}
		else
		{
			balance = balance - *arr;
		}
		break;
		case 3:
		printf("how much OMR you want to take\n");
		scanf("%d",&tick);
		if(tick <= 0){
			printf("\nInvalid value\n");
		}
		else{
			balance = balance + tick;
			tloans = tloans + tick;
		}
		break;
		case 4:
		printf("1 - January\n");
		printf("2 - February\n");
		printf("3 - March\n");
		printf("4 - April\n");
		printf("5 - May\n");
		printf("6 - June\n");
		printf("7 - July\n");
		printf("8 - August\n");
		printf("9 - September\n");
		printf("10 - October\n");
		printf("11 - November\n");
		printf("12 - December\n");
		do{
			scanf("%d",&loans);
		if(loans == 1){
			printf("1 - house rent fees is : %d\n",h1);
		    printf("2 - auto rent fees is : %d\n",a1);
	    	printf("3 - electrasity rent fees is : %d\n",e1);
	    	printf("4 - internet rent fees is : %d\n",i1);
	    	printf("5 - water rent fees is : %d\n\n",w1);
	    	do{
	    		printf("do you want to pay all fees in this month?\n");
	    	    printf("1 - yes\n2 - no\n");
	    	    scanf("%d",&fees);
	    	    if(fees == 1){
	    	    	if(balance - (h1+a1+e1+i1+w1) < 0){
	    	    		printf("you dont have enogh money\n\n");
					}
					else{
						balance = balance - (h1+a1+e1+i1+w1);
	    	    	    printf("we have withdraw from your balance %d OMR\n\n",(h1+a1+e1+i1+w1));
	    	        	h1 = 0;
	    	        	a1 = 0;
	    	        	e1 = 0;
	    	        	i1 = 0;
	    	        	w1 = 0;
					}
				}
				else if(fees != 1 && fees != 2){
					printf("Invalid input\n");
					printf("please press 1 or 2\n\n");
				}
			}while(fees != 1 && fees != 2);
		}
		else if(loans == 2){
			printf("1 - house rent fees is : %d\n",h2);
		    printf("2 - auto rent fees is : %d\n",a2);
	    	printf("3 - electrasity rent fees is : %d\n",e2);
	    	printf("4 - internet rent fees is : %d\n",i2);
	    	printf("5 - water rent fees is : %d\n",w2);
	    	do{
	    		printf("do you want to pay all fees in this month?\n");
	    	    printf("1 - yes\n2 - no\n\n");
	    	    scanf("%d",&fees);
	    	    if(fees == 1){
	    	    	if(balance - (h2+a2+e2+i2+w2) < 0){
	    	    		printf("you dont have enogh money\n\n");
					}
					else{
						balance = balance - (h2+a2+e2+i2+w2);
	    	        	printf("we have withdraw from your balance %d OMR\n\n",(h2+a2+e2+i2+w2));
	    	        	h2 = 0;
	    	        	a2 = 0;
	    	        	e2 = 0;
	    	        	i2 = 0;
	    	        	w2 = 0;
					}
				}
				else if(fees != 1 && fees != 2){
					printf("Invalid input\n");
					printf("please press 1 or 2\n\n");
				}
			}while(fees != 1 && fees != 2);
		}
		else if(loans == 3){
			printf("1 - house rent fees is : %d\n",h3);
		    printf("2 - auto rent fees is : %d\n",a3);
	    	printf("3 - electrasity rent fees is : %d\n",e3);
	    	printf("4 - internet rent fees is : %d\n",i3);
	    	printf("5 - water rent fees is : %d\n",w3);
	    	do{
	    		printf("do you want to pay all fees in this month?\n");
	    	    printf("1 - yes\n2 - no\n\n");
	    	    scanf("%d",&fees);
	    	    if(fees == 1){
	    	    	if(balance - (h3+a3+e3+i3+w3) < 0){
	    	    		printf("you dont have enogh money\n\n");
					}
	    	    	else{
	    	    		balance = balance - (h3+a3+e3+i3+w3);
	    	        	printf("we have withdraw from your balance %d OMR\n\n",(h3+a3+e3+i3+w3));
	    	        	h3 = 0;
	    	        	a3 = 0;
	    	        	e3 = 0;
	    	        	i3 = 0;
	    	        	w3 = 0;
					}
				}
				else if(fees != 1 && fees != 2){
					printf("Invalid input\n");
					printf("please press 1 or 2\n\n");
				}
			}while(fees != 1 && fees != 2);
     	}
     	else if(loans == 4){
			printf("1 - house rent fees is : %d\n",h4);
		    printf("2 - auto rent fees is : %d\n",a4);
	    	printf("3 - electrasity rent fees is : %d\n",e4);
	    	printf("4 - internet rent fees is : %d\n",i4);
	    	printf("5 - water rent fees is : %d\n",w4);
	    	do{
	    		printf("do you want to pay all fees in this month?\n");
	    	    printf("1 - yes\n2 - no\n\n");
	    	    scanf("%d",&fees);
	    	    if(fees == 1){
	    	    	if(balance - (h4+a4+e4+i4+w4) < 0){
	    	    		printf("you dont have enogh money\n\n");
					}
	    	    	else{
	    	    		balance = balance - (h4+a4+e4+i4+w4);
	    	        	printf("we have withdraw from your balance %d OMR\n\n",(h4+a4+e4+i4+w4));
	    	         	h4 = 0;
	    	        	a4 = 0;
	    	        	e4 = 0;
	    	        	i4 = 0;
	    	        	w4 = 0;
					}
				}
				else if(fees != 1 && fees != 2){
					printf("Invalid input\n");
					printf("please press 1 or 2\n\n");
				}
			}while(fees != 1 && fees != 2);
		}
		else if(loans == 5){
			printf("1 - house rent fees is : %d\n",h5);
		    printf("2 - auto rent fees is : %d\n",a5);
	    	printf("3 - electrasity rent fees is : %d\n",e5);
	    	printf("4 - internet rent fees is : %d\n",i5);
	    	printf("5 - water rent fees is : %d\n",w5);
	    	do{
	    		printf("do you want to pay all fees in this month?\n");
	    	    printf("1 - yes\n2 - no");
	    	    scanf("%d",&fees);
	    	    if(fees == 1){
	    	    	if(balance - (h5+a5+e5+i5+w5) < 0){
	    	    		printf("you dont have enogh money\n\n");
					}
	    	    	else{
	    	    		balance = balance - (h5+a5+e5+i5+w5);
	    	         	printf("we have withdraw from your balance %d OMR\n\n",(h5+a5+e5+i5+w5));
	    	        	h5 = 0;
	    	        	a5 = 0;
	    	        	e5 = 0;
	    	        	i5 = 0;
	    	        	w5 = 0;
					}
				}
				else if(fees != 1 && fees != 2){
					printf("Invalid input\n");
					printf("please press 1 or 2\n\n");
				}
			}while(fees != 1 && fees != 2);
		}
		else if(loans == 6){
			printf("1 - house rent fees is : %d\n",h6);
		    printf("2 - auto rent fees is : %d\n",a6);
	    	printf("3 - electrasity rent fees is : %d\n",e6);
	    	printf("4 - internet rent fees is : %d\n",i6);
	    	printf("5 - water rent fees is : %d\n",w6);
	    	do{
	    		printf("do you want to pay all fees in this month?\n");
	    	    printf("1 - yes\n2 - no");
	    	    scanf("%d",&fees);
	    	    if(fees == 1){
	    	    	if(balance - (h6+a6+e6+i6+w6) < 0){
	    	    		printf("you dont have enogh money\n\n");
					}
					else{
						balance = balance - (h6+a6+e6+i6+w6);
	    	        	printf("we have withdraw from your balance %d OMR\n\n",(h6+a6+e6+i6+w6));
	    	        	h6 = 0;
	    	        	a6 = 0;
	    	        	e6 = 0;
	    	        	i6 = 0;
	    	        	w6 = 0;
					}
				}
				else if(fees != 1 && fees != 2){
					printf("Invalid input\n");
					printf("please press 1 or 2\n\n");
				}
			}while(fees != 1 && fees != 2);
		}
		else if(loans == 7){
			printf("1 - house rent fees is : %d\n",h7);
		    printf("2 - auto rent fees is : %d\n",a7);
	    	printf("3 - electrasity rent fees is : %d\n",e7);
	    	printf("4 - internet rent fees is : %d\n",i7);
	    	printf("5 - water rent fees is : %d\n",w7);
	    	do{
	    		printf("do you want to pay all fees in this month?\n");
	    	    printf("1 - yes\n2 - no");
	    	    scanf("%d",&fees);
	    	    if(fees == 1){
	    	    	if(balance - (h7+a7+e7+i7+w7) < 0){
	    	    		printf("you dont have enogh money\n\n");
					}
					else{
						balance = balance - (h7+a7+e7+i7+w7);
	    	        	printf("we have withdraw from your balance %d OMR\n\n",(h7+a7+e7+i7+w7));
	    	        	h7 = 0;
	    	        	a7 = 0;
	    	        	e7 = 0;
	    	        	i7 = 0;
	    	        	w7 = 0;
					}
				}
				else if(fees != 1 && fees != 2){
					printf("Invalid input\n");
					printf("please press 1 or 2\n\n");
				}
			}while(fees != 1 && fees != 2);
		}
		else if(loans == 8){
			printf("1 - house rent fees is : %d\n",h8);
		    printf("2 - auto rent fees is : %d\n",a8);
	    	printf("3 - electrasity rent fees is : %d\n",e8);
	    	printf("4 - internet rent fees is : %d\n",i8);
	    	printf("5 - water rent fees is : %d\n",w8);
	    	do{
	    		printf("do you want to pay all fees in this month?\n");
	    	    printf("1 - yes\n2 - no");
	    	    scanf("%d",&fees);
	    	    if(fees == 1){
	    	    	if(balance - (h8+a8+e8+i8+w8) < 0){
	    	    		printf("you dont have enogh money\n\n");
					}
					else{
						balance = balance - (h8+a8+e8+i8+w8);
	    	        	printf("we have withdraw from your balance %d OMR\n\n",(h8+a8+e8+i8+w8));
	    	        	h8 = 0;
	    	        	a8 = 0;
	    	        	e8 = 0;
	    	        	i8 = 0;
	    	        	w8 = 0;
					}
				}
				else if(fees != 1 && fees != 2){
					printf("Invalid input\n");
					printf("please press 1 or 2\n\n");
				}
			}while(fees != 1 && fees != 2);
		}
		else if(loans == 9){
			printf("1 - house rent fees is : %d\n",h9);
		    printf("2 - auto rent fees is : %d\n",a9);
	    	printf("3 - electrasity rent fees is : %d\n",e9);
	    	printf("4 - internet rent fees is : %d\n",i9);
	    	printf("5 - water rent fees is : %d\n",w9);
	    	do{
	    		printf("do you want to pay all fees in this month?\n");
	    	    printf("1 - yes\n2 - no");
	    	    scanf("%d",&fees);
	    	    if(fees == 1){
	    	    	if(balance - (h9+a9+e9+i9+w9) < 0){
	    	    		printf("you dont have enogh money\n\n");
					}
					else{
						balance = balance - (h9+a9+e9+i9+w9);
	    	        	printf("we have withdraw from your balance %d OMR\n\n",(h9+a9+e9+i9+w9));
	    	        	h9 = 0;
	    	        	a9 = 0;
	    	        	e9 = 0;
	    	        	i9 = 0;
	    	    	    w9 = 0;
					}
				}
				else if(fees != 1 && fees != 2){
					printf("Invalid input\n");
					printf("please press 1 or 2\n\n");
				}
			}while(fees != 1 && fees != 2);
		}
		else if(loans == 10){
			printf("1 - house rent fees is : %d\n",h10);
		    printf("2 - auto rent fees is : %d\n",a10);
	    	printf("3 - electrasity rent fees is : %d\n",e10);
	    	printf("4 - internet rent fees is : %d\n",i10);
	    	printf("5 - water rent fees is : %d\n",w10);
	    	do{
	    		printf("do you want to pay all fees in this month?\n");
	    	    printf("1 - yes\n2 - no");
	    	    scanf("%d",&fees);
	    	    if(fees == 1){
	    	    	if(balance - (h10+a10+e10+i10+w10) < 0){
	    	    		printf("you dont have enogh money\n\n");
					}
					else{
						balance = balance - (h10+a10+e10+i10+w10);
	    	        	printf("we have withdraw from your balance %d OMR\n\n",(h10+a10+e10+i10+w10));
	    	    	    h10 = 0;
	    	        	a10 = 0;
	    	        	e10 = 0;
	    	        	i10 = 0;
	    	        	w10 = 0;
					}
				}
				else if(fees != 1 && fees != 2){
					printf("Invalid input\n");
					printf("please press 1 or 2\n\n");
				}
			}while(fees != 1 && fees != 2);
		}
		else if(loans == 11){
			printf("1 - house rent fees is : %d\n",h11);
		    printf("2 - auto rent fees is : %d\n",a11);
	    	printf("3 - electrasity rent fees is : %d\n",e11);
	    	printf("4 - internet rent fees is : %d\n",i11);
	    	printf("5 - water rent fees is : %d\n",w11);
	    	do{
	    		printf("do you want to pay all fees in this month?\n");
	    	    printf("1 - yes\n2 - no");
	    	    scanf("%d",&fees);
	    	    if(fees == 1){
	    	    	if(balance - (h11+a11+e11+i11+w11) < 0){
	    	    		printf("you dont have enogh money\n\n");
					}
					else{
						balance = balance - (h11+a11+e11+i11+w11);
	    	        	printf("we have withdraw from your balance %d OMR\n\n",(h11+a11+e11+i11+w11));
	    	        	h11 = 0;
	    	        	a11 = 0;
	    	        	e11 = 0;
	    	        	i11 = 0;
	    	        	w11 = 0;
					}
				}
				else if(fees != 1 && fees != 2){
					printf("Invalid input\n");
					printf("please press 1 or 2\n\n");
				}
			}while(fees != 1 && fees != 2);
		}
		else if(loans == 12){
			printf("1 - house rent fees is : %d\n",h12);
		    printf("2 - auto rent fees is : %d\n",a12);
	    	printf("3 - electrasity rent fees is : %d\n",e12);
	    	printf("4 - internet rent fees is : %d\n",i12);
	    	printf("5 - water rent fees is : %d\n",w12);
	    	do{
	    		printf("do you want to pay all fees in this month?\n");
	    	    printf("1 - yes\n2 - no");
	    	    scanf("%d",&fees);
	    	    if(fees == 1){
	    	    	if(balance - (h12+a12+e12+i12+w12) < 0){
	    	    		printf("you dont have enogh money\n\n");
					}
					else{
						balance = balance - (h12+a12+e12+i12+w12);
	    	        	printf("we have withdraw from your balance %d OMR\n\n",(h12+a12+e12+i12+w12));
	    	        	h12 = 0;
	    	        	a12 = 0;
	    	        	e12 = 0;
	    	         	i12 = 0;
	    	        	w12 = 0;
					}
				}
				else if(fees != 1 && fees != 2){
					printf("Invalid input\n");
					printf("please press 1 or 2\n\n");
				}
			}while(fees != 1 && fees != 2);
		}
		else{
			printf("Invalid selection\n\n");
			
		}
		loans =1;
		}while(loans !=1 && loans!=2&&loans!=3&&loans!=4&&loans!=5&&loans!=6&&loans!=7&loans!=8&&loans!=9&&loans!=10&&loans!=11&&loans!=12);
		break;
		case 5:
		file(tloans,str,st,acnu,balance,transfer,acount,tick,h1,a1,e1,i1,w1,h2,a2,e2,i2,w2,h3,a3,e3,i3,w3,h4,a4,e4,i4,w4,h5,a5,e5,i5,w5,h6,a6,e6,i6,w6,h7,a7,e7,i7,w7,h8,a8,e8,i8,w8,h9,a9,e9,i9,w9,h10,a10,e10,i10,w10,h11,a11,e11,i11,w11,h12,a12,e12,i12,w12);
		break;
		default:
		printf("Invalid option\n");
		transaction = 0;
	}
	transaction = 0;
	while(transaction != 1 && transaction != 2){
	printf("\ndo you want another transaction??\n");
	printf("1 - yes\n");
	printf("2 - no\n");
	scanf("%d", & transaction);
	}
	}
	    
	return 0;
	}
void file(int tloans,char str,char st,int acnu,int balance,int transfer,int acount,int tick,int h1,int a1,int e1,int i1,int w1,int h2,int a2,int e2,int i2,int w2,int h3,int a3,int e3,int i3,int w3,int h4,int a4,int e4,int i4,int w4,int h5,int a5,int e5,int i5,int w5,int h6,int a6,int e6,int i6,int w6,int h7,int a7,int e7,int i7,int w7,int h8,int a8,int e8,int i8,int w8,int h9,int a9,int e9,int i9,int w9,int h10,int a10,int e10,int i10,int w10,int h11,int a11,int e11,int i11,int w11,int h12,int a12,int e12,int i12,int w12)
{
	int data;
	int refresh;
    FILE *fptr;
	if((fptr = fopen("bills details.txt","r"))==NULL){
		printf("you should print your details in file then check again to display\n");
		printf("do you want to print your details in file?\n");
		do{
		printf("\nplease answer by 1 or 2\n");
		printf("1 - yes\n2 - no\n");
		scanf("%d",&data);
		if(data == 1){
		FILE *fptr = fopen("bills details.txt","w");
        fprintf(fptr,"your account number is : %d\n",acnu);
        fprintf(fptr,"your corrent balance is: %d OMR\n",balance);
        fprintf(fptr,"your total loans is    : %d OMR\n",tloans);
        fprintf(fptr,"your monthly fees :\n\n");
        fprintf(fptr,"in January :\n");
        fprintf(fptr,"house rent fees is : %d\n",h1);
		fprintf(fptr,"auto rent fees is : %d\n",a1);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e1);
	    fprintf(fptr,"internet rent fees is : %d\n",i1);
	    fprintf(fptr,"water rent fees is : %d\n\n",w1);
	    fprintf(fptr,"in February :\n");
        fprintf(fptr,"house rent fees is : %d\n",h2);
		fprintf(fptr,"auto rent fees is : %d\n",a2);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e2);
	    fprintf(fptr,"internet rent fees is : %d\n",i2);
	    fprintf(fptr,"water rent fees is : %d\n\n",w2);
	    fprintf(fptr,"in March :\n");
        fprintf(fptr,"house rent fees is : %d\n",h3);
		fprintf(fptr,"auto rent fees is : %d\n",a3);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e3);
	    fprintf(fptr,"internet rent fees is : %d\n",i3);
	    fprintf(fptr,"water rent fees is : %d\n\n",w3);
	    fprintf(fptr,"in April :\n");
        fprintf(fptr,"house rent fees is : %d\n",h4);
		fprintf(fptr,"auto rent fees is : %d\n",a4);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e4);
	    fprintf(fptr,"internet rent fees is : %d\n",i4);
	    fprintf(fptr,"water rent fees is : %d\n\n",w4);
	    fprintf(fptr,"in May :\n");
        fprintf(fptr,"house rent fees is : %d\n",h5);
		fprintf(fptr,"auto rent fees is : %d\n",a5);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e5);
	    fprintf(fptr,"internet rent fees is : %d\n",i5);
	    fprintf(fptr,"water rent fees is : %d\n\n",w5);
	    fprintf(fptr,"in June :\n");
        fprintf(fptr,"house rent fees is : %d\n",h6);
		fprintf(fptr,"auto rent fees is : %d\n",a6);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e6);
	    fprintf(fptr,"internet rent fees is : %d\n",i6);
	    fprintf(fptr,"water rent fees is : %d\n\n",w6);
	    fprintf(fptr,"in July :\n");
        fprintf(fptr,"house rent fees is : %d\n",h7);
		fprintf(fptr,"auto rent fees is : %d\n",a7);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e7);
	    fprintf(fptr,"internet rent fees is : %d\n",i7);
	    fprintf(fptr,"water rent fees is : %d\n\n",w7);
	    fprintf(fptr,"in August :\n");
        fprintf(fptr,"house rent fees is : %d\n",h8);
		fprintf(fptr,"auto rent fees is : %d\n",a8);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e8);
	    fprintf(fptr,"internet rent fees is : %d\n",i8);
	    fprintf(fptr,"water rent fees is : %d\n\n",w8);
	    fprintf(fptr,"in September :\n");
        fprintf(fptr,"house rent fees is : %d\n",h9);
		fprintf(fptr,"auto rent fees is : %d\n",a9);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e9);
	    fprintf(fptr,"internet rent fees is : %d\n",i9);
	    fprintf(fptr,"water rent fees is : %d\n\n",w9);
	    fprintf(fptr,"in October :\n");
        fprintf(fptr,"house rent fees is : %d\n",h10);
		fprintf(fptr,"auto rent fees is : %d\n",a10);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e10);
	    fprintf(fptr,"internet rent fees is : %d\n",i10);
	    fprintf(fptr,"water rent fees is : %d\n\n",w10);
	    fprintf(fptr,"in November :\n");
        fprintf(fptr,"house rent fees is : %d\n",h11);
		fprintf(fptr,"auto rent fees is : %d\n",a11);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e11);
	    fprintf(fptr,"internet rent fees is : %d\n",i11);
	    fprintf(fptr,"water rent fees is : %d\n\n",w11);
	    fprintf(fptr,"in December :\n");
        fprintf(fptr,"house rent fees is : %d\n",h12);
		fprintf(fptr,"auto rent fees is : %d\n",a12);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e12);
	    fprintf(fptr,"internet rent fees is : %d\n",i12);
	    fprintf(fptr,"water rent fees is : %d\n\n",w12);
		putc(str,fptr);
		fclose(fptr);
		printf("press 1 to refresh if need it then check again(if no need press any key)\n");
    	scanf("%d",&refresh);
    	if(refresh == 1){
    	FILE *fptr = fopen("bills details.txt","w");
        fprintf(fptr,"your account number is : %d\n",acnu);
        fprintf(fptr,"your corrent balance is: %d OMR\n",balance);
        fprintf(fptr,"your total loans is    : %d OMR\n",tloans);
        fprintf(fptr,"your monthly fees :\n\n");
        fprintf(fptr,"in January :\n");
        fprintf(fptr,"house rent fees is : %d\n",h1);
		fprintf(fptr,"auto rent fees is : %d\n",a1);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e1);
	    fprintf(fptr,"internet rent fees is : %d\n",i1);
	    fprintf(fptr,"water rent fees is : %d\n\n",w1);
	    fprintf(fptr,"in February :\n");
        fprintf(fptr,"house rent fees is : %d\n",h2);
		fprintf(fptr,"auto rent fees is : %d\n",a2);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e2);
	    fprintf(fptr,"internet rent fees is : %d\n",i2);
	    fprintf(fptr,"water rent fees is : %d\n\n",w2);
	    fprintf(fptr,"in March :\n");
        fprintf(fptr,"house rent fees is : %d\n",h3);
		fprintf(fptr,"auto rent fees is : %d\n",a3);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e3);
	    fprintf(fptr,"internet rent fees is : %d\n",i3);
	    fprintf(fptr,"water rent fees is : %d\n\n",w3);
	    fprintf(fptr,"in April :\n");
        fprintf(fptr,"house rent fees is : %d\n",h4);
		fprintf(fptr,"auto rent fees is : %d\n",a4);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e4);
	    fprintf(fptr,"internet rent fees is : %d\n",i4);
	    fprintf(fptr,"water rent fees is : %d\n\n",w4);
	    fprintf(fptr,"in May :\n");
        fprintf(fptr,"house rent fees is : %d\n",h5);
		fprintf(fptr,"auto rent fees is : %d\n",a5);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e5);
	    fprintf(fptr,"internet rent fees is : %d\n",i5);
	    fprintf(fptr,"water rent fees is : %d\n\n",w5);
	    fprintf(fptr,"in June :\n");
        fprintf(fptr,"house rent fees is : %d\n",h6);
		fprintf(fptr,"auto rent fees is : %d\n",a6);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e6);
	    fprintf(fptr,"internet rent fees is : %d\n",i6);
	    fprintf(fptr,"water rent fees is : %d\n\n",w6);
	    fprintf(fptr,"in July :\n");
        fprintf(fptr,"house rent fees is : %d\n",h7);
		fprintf(fptr,"auto rent fees is : %d\n",a7);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e7);
	    fprintf(fptr,"internet rent fees is : %d\n",i7);
	    fprintf(fptr,"water rent fees is : %d\n\n",w7);
	    fprintf(fptr,"in August :\n");
        fprintf(fptr,"house rent fees is : %d\n",h8);
		fprintf(fptr,"auto rent fees is : %d\n",a8);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e8);
	    fprintf(fptr,"internet rent fees is : %d\n",i8);
	    fprintf(fptr,"water rent fees is : %d\n\n",w8);
	    fprintf(fptr,"in September :\n");
        fprintf(fptr,"house rent fees is : %d\n",h9);
		fprintf(fptr,"auto rent fees is : %d\n",a9);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e9);
	    fprintf(fptr,"internet rent fees is : %d\n",i9);
	    fprintf(fptr,"water rent fees is : %d\n\n",w9);
	    fprintf(fptr,"in October :\n");
        fprintf(fptr,"house rent fees is : %d\n",h10);
		fprintf(fptr,"auto rent fees is : %d\n",a10);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e10);
	    fprintf(fptr,"internet rent fees is : %d\n",i10);
	    fprintf(fptr,"water rent fees is : %d\n\n",w10);
	    fprintf(fptr,"in November :\n");
        fprintf(fptr,"house rent fees is : %d\n",h11);
		fprintf(fptr,"auto rent fees is : %d\n",a11);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e11);
	    fprintf(fptr,"internet rent fees is : %d\n",i11);
	    fprintf(fptr,"water rent fees is : %d\n\n",w11);
	    fprintf(fptr,"in December :\n");
        fprintf(fptr,"house rent fees is : %d\n",h12);
		fprintf(fptr,"auto rent fees is : %d\n",a12);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e12);
	    fprintf(fptr,"internet rent fees is : %d\n",i12);
	    fprintf(fptr,"water rent fees is : %d\n\n",w12);
		putc(str,fptr);
		fclose(fptr);
}
		}
		else if(data == 2){
			break;
		}
		}while(data!=1&&data!=2);

}
        while((str=fgetc(fptr))!=EOF){
    	printf("%c",str);
    }
        if(data != 2 &&data != 1){
        printf("press 1 to refresh if need it then check again(if no need press any key)\n");
    	scanf("%d",&refresh);
    	if(refresh == 1){
    	FILE *fptr = fopen("bills details.txt","w");
        fprintf(fptr,"your account number is : %d\n",acnu);
        fprintf(fptr,"your corrent balance is: %d OMR\n",balance);
        fprintf(fptr,"your total loans is    : %d OMR\n",tloans);
        fprintf(fptr,"your monthly fees :\n\n");
        fprintf(fptr,"in January :\n");
        fprintf(fptr,"house rent fees is : %d\n",h1);
		fprintf(fptr,"auto rent fees is : %d\n",a1);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e1);
	    fprintf(fptr,"internet rent fees is : %d\n",i1);
	    fprintf(fptr,"water rent fees is : %d\n\n",w1);
	    fprintf(fptr,"in February :\n");
        fprintf(fptr,"house rent fees is : %d\n",h2);
		fprintf(fptr,"auto rent fees is : %d\n",a2);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e2);
	    fprintf(fptr,"internet rent fees is : %d\n",i2);
	    fprintf(fptr,"water rent fees is : %d\n\n",w2);
	    fprintf(fptr,"in March :\n");
        fprintf(fptr,"house rent fees is : %d\n",h3);
		fprintf(fptr,"auto rent fees is : %d\n",a3);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e3);
	    fprintf(fptr,"internet rent fees is : %d\n",i3);
	    fprintf(fptr,"water rent fees is : %d\n\n",w3);
	    fprintf(fptr,"in April :\n");
        fprintf(fptr,"house rent fees is : %d\n",h4);
		fprintf(fptr,"auto rent fees is : %d\n",a4);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e4);
	    fprintf(fptr,"internet rent fees is : %d\n",i4);
	    fprintf(fptr,"water rent fees is : %d\n\n",w4);
	    fprintf(fptr,"in May :\n");
        fprintf(fptr,"house rent fees is : %d\n",h5);
		fprintf(fptr,"auto rent fees is : %d\n",a5);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e5);
	    fprintf(fptr,"internet rent fees is : %d\n",i5);
	    fprintf(fptr,"water rent fees is : %d\n\n",w5);
	    fprintf(fptr,"in June :\n");
        fprintf(fptr,"house rent fees is : %d\n",h6);
		fprintf(fptr,"auto rent fees is : %d\n",a6);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e6);
	    fprintf(fptr,"internet rent fees is : %d\n",i6);
	    fprintf(fptr,"water rent fees is : %d\n\n",w6);
	    fprintf(fptr,"in July :\n");
        fprintf(fptr,"house rent fees is : %d\n",h7);
		fprintf(fptr,"auto rent fees is : %d\n",a7);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e7);
	    fprintf(fptr,"internet rent fees is : %d\n",i7);
	    fprintf(fptr,"water rent fees is : %d\n\n",w7);
	    fprintf(fptr,"in August :\n");
        fprintf(fptr,"house rent fees is : %d\n",h8);
		fprintf(fptr,"auto rent fees is : %d\n",a8);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e8);
	    fprintf(fptr,"internet rent fees is : %d\n",i8);
	    fprintf(fptr,"water rent fees is : %d\n\n",w8);
	    fprintf(fptr,"in September :\n");
        fprintf(fptr,"house rent fees is : %d\n",h9);
		fprintf(fptr,"auto rent fees is : %d\n",a9);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e9);
	    fprintf(fptr,"internet rent fees is : %d\n",i9);
	    fprintf(fptr,"water rent fees is : %d\n\n",w9);
	    fprintf(fptr,"in October :\n");
        fprintf(fptr,"house rent fees is : %d\n",h10);
		fprintf(fptr,"auto rent fees is : %d\n",a10);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e10);
	    fprintf(fptr,"internet rent fees is : %d\n",i10);
	    fprintf(fptr,"water rent fees is : %d\n\n",w10);
	    fprintf(fptr,"in November :\n");
        fprintf(fptr,"house rent fees is : %d\n",h11);
		fprintf(fptr,"auto rent fees is : %d\n",a11);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e11);
	    fprintf(fptr,"internet rent fees is : %d\n",i11);
	    fprintf(fptr,"water rent fees is : %d\n\n",w11);
	    fprintf(fptr,"in December :\n");
        fprintf(fptr,"house rent fees is : %d\n",h12);
		fprintf(fptr,"auto rent fees is : %d\n",a12);
	    fprintf(fptr,"electrasity rent fees is : %d\n",e12);
	    fprintf(fptr,"internet rent fees is : %d\n",i12);
	    fprintf(fptr,"water rent fees is : %d\n\n",w12);
		putc(str,fptr);
		fclose(fptr);
	}
		}
}
int* mytrans()
{
	static int transfer[1000];
	int i,person=0 ,aconum,acount;
	
    	printf("How many account you want to transfer\n");
		scanf("%d", & acount);
	for(i=0;i<acount;i++){
			printf("Enter Acount Number for person %d\n",person+1);
			person++;
			scanf("%d",&aconum);
			printf("Enter how much OMR do you want to transfer for person %d\n",person);
	        scanf("%d", & transfer[i]);
	        if(transfer[i] <= 0){
			printf("\nInvalid value\n");
		}
		}
		for(i=0;i<acount;i++)
			return transfer;
		}
