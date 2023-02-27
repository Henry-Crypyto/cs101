#include <stdio.h>

int main()
{
    char a[]="AABBBCCCCddd";
    int array_size=sizeof(a)/sizeof(a[0])-1;
    for(int i=0;i<array_size;i++){
        int count=1;
        while(i<array_size&&a[i]==a[i+1]){
            count++;
            i++;
        }
        printf("%c%d",a[i],count);
    }
}