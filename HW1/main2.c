#include <stdio.h>

int main()
{
    char a[]="A3B2C4A9";
    int array_size=sizeof(a)-1;
    for(int n=0;n<array_size;n+=2){
        int count=a[n+1]-'0';
        for(int j=0;j<count;j++){
            printf("%c",a[n]);
        }
    }
}