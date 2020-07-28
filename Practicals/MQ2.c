#include <stdio.h>
int main()
{
    char name[8][10];
    float mk[8];
    char gr[8][10];
    FILE *m; 
    m = fopen("markrecord.txt", "r"); 
    int counter=0;
    while(!feof(m)){    
    		fscanf(m,"%s",&name[counter]);
    		fscanf(m,"%f",&mk[counter]);  
    		fscanf(m,"%s",&gr[counter]);  			 		
			counter++; 
  	}
	fclose(m);
	counter=0;
	FILE *p,*f;
    p = fopen("pass.txt", "w");
    for(counter=0;counter<8;counter++){
   		if( strcmp(gr[counter], "pass") ==0 ){
	   		
	   		fprintf(p, "%s \t %f\t %s \n ", name[counter], mk[counter], gr[counter]);
	   }
	}
	    f = fopen("fail.txt", "w");
   	while(counter<8){
   		if( strcmp(gr[counter], "fail") ==0 ){
   			fprintf(f, "%s \t %f\t %s \n ",name[counter], mk[counter], gr[counter]);	
	   }
	   counter++;
	}

	
	
	
	fclose(p);
    fclose(f);
	return 0;
}
