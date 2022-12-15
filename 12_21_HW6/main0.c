#include <stdio.h>

int main()
{
    int n=64;
    char aws[6];
    n < 1 ? printf("false") : (n&(n - 1)) == 0 ? printf("true") : printf("false");
    
}