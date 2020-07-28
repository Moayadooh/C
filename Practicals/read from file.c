#include<stdio.h>
int main()
{
	char str;
	FILE *fptr;
//	int i=0;
	if((fptr=fopen("input.txt","r"))==NULL){
		//error messge will come
		printf("File cannot be opened");
	//	exit(-1);
		}else{
			
			while((str=fgetc(fptr))!=EOF){
				printf("%c",str);
			}
		}
		fclose(fptr);
		
		return 0;
}
