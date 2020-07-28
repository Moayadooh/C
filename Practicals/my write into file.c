#include<stdio.h>
int main()
{
	FILE *p;
	char s;
	
	p = fopen("txt.txt","w");
	while((s=getche())!='\r')
	putc(s,p);
	fclose(p);
	
	return 0;
}
