#include<stdio.h>
int main()
{
	FILE *p;
	char s;
	
	p = fopen("txt.txt","r");
	while((s=fgetc(p))!=EOF){
		printf("%c",s);
	}
	fclose(p);
	
	return 0;
}
