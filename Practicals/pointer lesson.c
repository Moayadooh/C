#include<stdio.h>
int main(){
	int *m,x=567;
	m=&x;
	
	printf("\nmemory address of x = %d\n",&x);
	printf("\nm is pointer that contain memory address of x which is = %d\n",m);
	printf("\nvalue at x = %d",*m);
	
	return 0;
}
// %p hexa decimal
// %u unssigned value
