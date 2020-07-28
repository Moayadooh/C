#include<stdio.h>
int main(){
	int selection;
	
	printf("Select Process :\n\n");
	printf("1 - Display Record\n");
	printf("2 - Modify Record\n");
	printf("3 - Delete Record\n");
	scanf("%d", & selection);
	
	switch(selection){
		case 1: printf("you have selected 'Display Record'");
		break;
		case 2: printf("you have selected 'Modify Record'");
		break;
		case 3: printf("you have selected 'Delete Record'");
		break;
		default: printf("INVALID SELECTION!");
	}
	
	return 0;
}
