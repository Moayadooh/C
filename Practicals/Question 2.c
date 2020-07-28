#include<stdio.h>
int main(){
	
	FILE *m;
	int i,ma[8],j=0;
	char st[8][10],gr[8][10];
	float total=0,average;
	m = fopen("markrecord.txt","r");
	for(i=0;!feof(m);i++){
		fscanf(m,"%s %d %s",&st[i],&ma[i],&gr[i]);
		if(strcmp(gr[i],"pass")==0){
			printf("%s %d %s\n",st[i],ma[i],gr[i]);
		}
	}
	fclose(m);
	FILE *p;
	p = fopen("pass.txt","w");
	for(i=0;i<8;i++){
		if(strcmp(gr[i],"pass")==0){
			fprintf(p,"%s %d %s\n",st[i],ma[i],gr[i]);
		}
	}
	fclose(p);
	FILE *f;
	f = fopen("fail.txt","w");
	for(i=0;i<8;i++){
		if(strcmp(gr[i],"fail")==0){
			fprintf(f,"%s %d %s\n",st[i],ma[i],gr[i]);
			total = total + ma[i];
			j++;
		}
	}
	average = total/j;
	printf("average fail students is : %f",average);
	fclose(f);
	
	return 0;
}
