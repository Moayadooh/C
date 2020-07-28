#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void printingout(int,float,float,float,float,float);
int main()
{
	
	FILE *read;
char soo;
   float tax;
   float aftert;
   int vip;
   float disc;
	float all;
	FILE *input;
	char name[50];
	float lol=0;
	float afterd;
	float nug=0;
	float gar=0;
	float plain=0;
	float ice=0;
	float veg=0;
	char ps[100];
	float bpiza; //price for the base pizza type
	int *xx; //multi pointer
	int opt;
	float totd; //main side dishes price
	int dn;
	int i;
	int psize;
	int sidefood[20];
	int pn;
	pn=1;
	int topt;
	int topping;
	int pbase;
	float sizeprice; //main size price
	float topprice1; //main top of pizza price
	topprice1=0.0;
	float topprice2[3];
	topprice2[0]=0.0;
	topprice2[1]=0.0;
	topprice2[2]=0.0;
	float topprice3[3];
	topprice3[0]=0.0;
	topprice3[1]=0.0;
	topprice3[2]=0.0;
	float topprice4[3];
	topprice4[0]=0.0;
	topprice4[1]=0.0;
	topprice4[2]=0.0;
	float tottoping;
	printf("eneter casher name:\n");
	scanf("%s",&name);
	printf("----welcome to domicnic pizza resturent-----\n");
	printf("before you start with the order, do you have  a VIP card? (press 1 for yes and 0 for no)\n");
	scanf("%d",&vip);
	if (vip==1)
	{
		printf("welcome our returning cosutmer ");
	}
	else {
		printf("you dont have a VIP card and no discount will be applayed");
	}
/*	 read=fopen("info.txt","r");
	 while(!feof(read))
	 {
	 	fscanf(read,"%c",&soo);
	 	printf("%c",soo);
	 }
*/	printf(" please chose the size of pizza you want \n");
	printf("for the small size please press 1\n");
	printf("for the medium size please press 2\n");
	printf("for the large size please press 3 \n");
	scanf("%d",&psize);
	switch (psize)
	
	{             
		case 1: sizeprice=2;
		break;
		case 2: sizeprice=4;
		break;
		case 3: sizeprice=5;
	}
	printf("size price is %f\n",sizeprice);
	printf("what would like the topping of the pizza? please chose from the list below\n");
	printf("for the peri peri chicken press 1\n");
	printf("for the jalapeno press 2\n");
	printf("for the  super superme chicken press 3\n");
	printf("for the Hawaiin press 4\n");
	scanf("%d",&topping);
	switch (topping)
	{
		case 1: if (psize==1)
		{
			topprice1=1.0;
		}
		else if (psize==2)
		{
			topprice1=3.0;
		}
		else if (psize==3)
		{
			topprice1=4.0;
		}
		break;
		case 2: if (psize==1)
		{
			topprice1=1.5;
		}
		else if (psize==2)
		{
			topprice1=3.5;
		}
		else if(psize==3)
		{
			topprice1=4.5;
		}
		case 3: if (psize==1)
		{
			topprice1=2;
		}
		else if (psize==2)
		{
			topprice1=3;
		}
		else if (psize==3)
		{
			topprice1=3;
		}
		case 4: if (psize==1)
		{
			topprice1=2.1;
		}
		else if (psize==2)
		{
			topprice1=3;
		}
		else if(psize==3)
		{
			topprice1=3.5;
		}
	}
	printf("total is %f\n",topprice1);
	printf(" what would you like the pizza base be ? plese select from the list below\n");
	printf("for the classic base press 1 \n ");
	printf("for the crunchy thin crust press 2 \n");
	printf("for the extreme edge crust prss 3 \n");
	scanf("%d",&pbase);
	switch (pbase)
	{
		case 1: bpiza=0;
		break;
		case 2: bpiza=0;
		break;
		case 3: bpiza=1;
	}
	printf("how many pizzas would u like to order?\n");
	scanf("%d",&pn);
	
	printf("would u like some side dishes ? \n");
	printf("for yes preess 1 \n");
	printf("for no press 2 \n");
	scanf("%d",&opt);
	if (opt==1){
		printf("how many side dishes would u like to have? (max is 8 dishes)\n");
		scanf("%d",&dn);
		for(i=0;i<dn;i++){
		printf("what side dishes would u like to have? please select from the list below\n");
		printf("for chicken lolipop press 1\n");
		printf("for chicken  nuggests press 2\n");
		printf("for garlic bread press 3\n");
		printf("for plain bread press 4 \n");
		printf("for sweet ice cream press 5\n");
		printf("for vegetables salad press 6\n");
		scanf("%d",&sidefood[i]);
		}
		xx = &sidefood[0];
		if (*xx==1){
			lol=1.5+lol;
	}
	    else if (*xx==2){
	
			nug=nug+1.5;
	}	
	    else if (*xx==3){
		gar=gar+1.0;
	}
	    else if (*xx==3){
		plain=plain+0.5;
	}
	    else if (*xx==4){
		ice=ice+0.5;
	}
	    else if (*xx==5){
		veg=veg+1.0;
	    }
	xx = &sidefood[1];
		if (*xx==1){
			lol=1.5+lol;
	     }
	else if (*xx==2){
			nug=nug+1.5;
	       }	
	else if (*xx==3){
		gar=gar+1.0;
	}
	else if (*xx==3){
		plain=plain+0.5;
	}
	else if (*xx==4){
		ice=ice+0.5;
	}
	else if (*xx==5){
		veg=veg+1.0;
	}
	else{
		return 0;
	}
	xx = &sidefood[2];
		if (*xx==1){
			lol=1.5+lol;
	}
	else if (*xx==2){
			nug=nug+1.5;
	}	
	else if (*xx==3){
		gar=gar+1.0;
	}
	else if (*xx==3){
		plain=plain+0.5;
	}
	else if (*xx==4){
		ice=ice+0.5;
	}
	else if (*xx==5){
		veg=veg+1.0;
	}
	xx = &sidefood[0];
		if (*xx==1){
	                	lol=1.5+lol;
	}
	else if (*xx==3){
			nug=nug+1.5;
	}	
	else if (*xx==3){
		gar=gar+1.0;
	}
	else if (*xx==3){
		plain=plain+0.5;
	}
	else if (*xx==4){
		ice=ice+0.5;
	}
	else if (*xx==5){
		veg=veg+1.0;
	}
	xx = &sidefood[4];
		if (*xx==1){
		       lol=1.5+lol;
	}
	else if (*xx==2){
			nug=nug+1.5;
	}	
	else if (*xx==3){
		gar=gar+1.0;
	}
	else if (*xx==3){
		plain=plain+0.5;
	}
	else if (*xx==4){
		ice=ice+0.5;
	}
	else if (*xx==5){
		veg=veg+1.0;
	}
	xx = &sidefood[5];
		if (*xx==1){
			lol=1.5+lol;
	}
	else if (*xx==2){
			nug=nug+1.5;
	}	
	else if (*xx==3){
		gar=gar+1.0;
	}
	else if (*xx==3){
		plain=plain+0.5;
	}
	else if (*xx==4){
		ice=ice+0.5;
	}
	else if (*xx==5){
		veg=veg+1.0;
	}
	xx = &sidefood[6];
		if (*xx==1){
	                	lol=1.5+lol;
	}
	else if (*xx==2){
			nug=nug+1.5;
	}	
	else if (*xx==3){
		gar=gar+1.0;
	}
	else if (*xx==3){
		plain=plain+0.5;
	}
	else if (*xx==4){
		ice=ice+0.5;
	}
	else if (*xx==5){
		veg=veg+1.0;
	}
	xx = &sidefood[7];
		if (*xx==1){
			lol=1.5+lol;
	}
	else if (*xx==2){
			nug=nug+1.5;
	}	
	else if (*xx==3){
		gar=gar+1.0;
	}
	else if (*xx==3){
		plain=plain+0.5;
	}
	else if (*xx==4){
		ice=ice+0.5;
	}
	else if (*xx==5){
		veg=veg+1.0;
	}
	xx = &sidefood[8];
		if (*xx==1){
			lol=1.5+lol;
	}
	else if (*xx==2){
                        		nug=nug+1.5;
	}
	else if (*xx==3){
		gar=gar+1.0;
	}
	else if (*xx==3){
		plain=plain+0.5;
	}
	else if (*xx==4){
		ice=ice+0.5;
	}
	else if (*xx==5){
		veg=veg+1.0;
	}
		totd=nug+lol+gar+plain+ice+veg;
		printf("total side is %f\n",totd);
		all=totd+bpiza+sizeprice+topprice1;
	printf("total food is%f\n",all);	
	}
	else if (opt==2){
		printf("no side dishes will be included\n");
		totd=0;	
	all=totd+bpiza+sizeprice+topprice1;
	printf("total food is%f\n",all);
}
	if(vip==1)
	{
		disc=all*0.10;
		afterd=disc-all;
	}
	else
	{
		disc=0;
	}
	printingout(pn,all,tax,afterd,aftert,disc);
}
void printingout(int pn,float alli,float taxx,float afterdd,float aftertt,float discc)
{
	float newall;
		int n;
srand(time(NULL));
n = rand() % 99999;
	 time_t t;
   time(&t);
	FILE*input;
	input= fopen("pizzabig.txt","w");
	fprintf(input, "sales record \n");
	fprintf(input, "current date :\n%s",ctime(&t));
	fprintf(input, "\nbill ID %d \n",n);
	fprintf(input,"\ntotal original price%f \n  ",alli);
	fprintf(input,"total price after discount (only if you have VIP(10%) %f",afterdd);
	fprintf(input,"discounted price  %f \n",discc);
	taxx=afterdd*0.20;
	aftertt=taxx-afterdd;
	newall=pn*aftertt;
	fprintf(input,"price inculding tax(%2) is %f:  \n",aftertt);
	}

