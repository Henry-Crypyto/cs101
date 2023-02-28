#include <stdio.h>

int main()
{
    char a[]="ac-789bc";
    int array_size=sizeof(a)-1,sum=0,count=-1,x=0;
    
    for(int i=0;i<array_size;i++){
        if(a[i]=='-'){
            x=1;
        }
    }
    
    for(int i=array_size;i>0;i--){
        if(a[i-1]<65&&x!=1){
            count++;
            int temp=a[i-1]-'0',temp_pow; 
            
            if(count==0){
                temp_pow=temp;
            }else{
                for(int j=0;j<count;j++){
                temp_pow=temp*=10;
                }
            }
            
            sum=sum+temp_pow;
            printf("%d\n",sum);
        }else if(a[i-1]<65){
            if(a[i-1]=='-'){
                int b=0;
            }else{
             count++;
             int temp=a[i-1]-'0',temp_pow; 
            if(count==0){
                temp_pow=temp;
            }else{
                for(int j=0;j<count;j++){
                  temp_pow=temp*=10;
                }
            }
            sum=sum-temp_pow;
          }
        }
    }
    
    printf("%d\n",sum);
}