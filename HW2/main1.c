#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    FILE *fp = fopen("lotto.txt", "wb+");
    int num[69],input;
    
    printf("How many sets do you want to buy?\n");
    scanf("%d",&input);
    int lottery[input][7];
    
    srand(time(NULL));//產生亂數
    time_t t;   
    time(&t);//產生當下時間

    for(int i = 0;i<69;i++){
        num[i]=i+1;
    }
    
    for(int i=0;i<input;i++){
        for(int j=0;j<7;j++){
          int r = rand()%70;
          if(r==0)r++;
          lottery[i][j] = r ;
          if(num[r]==0)j--;
          if(j==6){
              if(r>10){
                  j--;
              }
          }
          num[r]=0;
        }
    }
    
     fprintf(fp,"%s\n",ctime(&t));
     for(int i=0;i<input;i++){
        for(int j=0;j<7;j++){
          fprintf(fp,"%d ",lottery[i][j]);
          printf("%d ",lottery[i][j]);
        }
          fprintf(fp,"\n");
        printf("\n");
     }
     fclose(fp);
}