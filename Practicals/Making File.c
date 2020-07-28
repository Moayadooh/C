#include<stdio.h>
void main(void)
{
	FILE *fptr;
	char ch;
	
	fptr = fopen("txtfile.txt","w");
	while((ch=getche())!='\r')
	putc(ch,fptr);
	fclose(fptr);
}
