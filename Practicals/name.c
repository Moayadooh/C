#include<stdio.h>
int main(){
	int c=1,r,i,j;
	char ch [20]={' ','#'};
	char ch1[20]={'#',' '};
	char ch2[20]={' ','#',' ',' '};
	char ch3[20]={' ','#',' ',' ',' ','#'};
	char ch4[20]={'#',' ','#',' ',' ',' ','#',' ','#',' ',' ',' ','#'};
	char ch5[20]={' ',' ',' ','#',' ','#','#','#','#','#',' ','#',' ',' ',' ','#'};
	
	while(c<7){
		for(r=0;r<1;r++){
			printf("%c",ch1[0]);
			if(c==1){
				for(i=0;i<3;i++){
				printf("%c",ch1[1]);
			}
			}
			else if(c==2){
		    	for(j=0;j<2;j++){
				printf("%s",ch2);
			}
	    		for(i=0;i<3;i++){
				printf("%c",ch1[0]);
			}
			printf("\n");
    		}
	    	else if(c==3){
			for(j=0;j<1;j++){
				printf("%s",ch1);
				for(i=0;i<2;i++){
					printf("%c",ch1[0]);
				}
				for(j=0;j<2;j++){
					printf("%s",ch3);
				}
			}
			printf("\n");
	    	}
	    	else if(c==4){
	    		for(i=0;i<3;i++){
	    			printf("%s",ch);
	    			for(j=3;j<(i*4)-2;j++)
	    			printf("%c",ch1[1]);
				}
				for(i=0;i<1;i++){
					printf("%s",ch1);
					for(j=0;j<5;j++){
						printf("%c",ch1[0]);
					}
				}
				printf("\n");
			}
			else if(c==5){
				for(i=0;i<3;i++){
					printf("%c",ch[0]);
				}
				printf("%s",ch4);
				printf("\n");
			}
			else if(c==6){
			printf("%s",ch5);
			}
		}
		c++;
	}
	return 0;
}
