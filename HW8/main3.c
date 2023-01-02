#include<stdio.h>
#include <math.h>
void get_binary(unsigned n)
{
    int n_log2=log2(n);
    unsigned i;
    if(n_log2%4>0){
        n_log2+=(4-n_log2%4);
    }
    for (i = 1 << n_log2-1; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
    printf("\n");
}
 
int main(void)
{
    get_binary(6);
    get_binary(16);
    get_binary(255);
}