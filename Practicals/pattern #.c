#include<stdio.h>
int main()
{
int rows,i=1,j;
printf("Enter number of rows :");
scanf("%d",&rows);
while(i<=rows)
{
for(j=1;j<=i;j++)
{
printf("#");
}
printf("\n");
        i++;
}
    return 0;
}
