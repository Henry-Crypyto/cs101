#include <stdio.h>
#include <stdlib.h>
int bitcount(unsigned int n)
{
   int count = 0 ;
   while (n)
   {
      count++ ;
      n &= (n - 1) ; 
   }
   return count ;
}
int main(){
    int count = 0, i;
    i = 15;
    count = bitcount(i);
    printf("%d有%d個位元為1\n\n", i, count);

    system("pause");
    return 0;
}
