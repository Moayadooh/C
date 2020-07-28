#include<stdio.h>
void move(int,char,char,char);
void main()
{
	int numdisk;
	printf("\nEnter number of disks :\n");
	scanf("%d",&numdisk);
	if(numdisk > 0){
		move(numdisk,'A','C','B');
	}
}
void move(int numdisk,char from,char destination,char intermediate)
{
	static int step = 0;
	if(numdisk==1){
		printf("step %d : move disk 1 from nedel %c to nedel %c\n",++step,from,destination);
	}
	else{
		move(numdisk-1,from,intermediate,destination);
		printf("step %d : move disk %d from nedel %c to nedel %c\n",++step,numdisk,from,destination);
		move(numdisk-1,intermediate,destination,from);
	}
}
