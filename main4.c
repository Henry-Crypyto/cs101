#include <stdio.h>
#include <math.h>
int main()
{
    char a[]="ac-99bc";
    int array_size=sizeof(a)-1,sum=0,count=-1,x=0;
    for(int i=0;i<array_size;i++){
        if(a[i]=='-'){
            x=1;
        }
    }
    
    for(int i=0;i<array_size;i++){
        if(a[i]<65&&a[i]!='-'&&x!=1){
            count++;
            int temp=a[i]-'0';
            sum=sum+temp*pow(10,count);
        }else if(a[i]<65){
            if(a[i]=='-'){
                int b=0;
            }else{
            count++;
            int temp=a[i]-'0';
            sum=sum-temp*pow(10,count);
            }
        }
    }
    
    printf("%d\n",sum);
}