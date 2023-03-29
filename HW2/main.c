#include <stdio.h>

int main(){
	FILE  *fp= fopen("main.c", "r+"), *fpw = fopen("main2.txt", "w+");
	int c, row = 1;
	
	fprintf(fpw,"01  ");
	while ((c = getc(fp)) != EOF){
        if(c=='\n'){
	        fprintf(fpw,"\n%02d  ", ++row);
	    }else{
	        fprintf(fpw,"%c", c);
	    }
	}
	   
	fclose(fp);
	fclose(fpw);
	return 0;
}