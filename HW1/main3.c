#include <stdio.h>

int main()
{
    char a[]="ABCabcABC";
    int shift=4,array_size=sizeof(a)-1;
    for(int i=shift;i<array_size;i++){
        printf("%c",a[i]);
    }
    for(int i=0;i<shift;i++){
        printf("%c",a[i]);
    }
}