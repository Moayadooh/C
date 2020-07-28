#include<stdio.h>
int main(){
	
	char ch;
	FILE *fptr;
	fptr = fopen("input.txt","w");
	while((ch=getche())!='\r')
	putc(ch,fptr);
	fclose(fptr);
	
	return 0;
}
