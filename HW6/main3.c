#include <stdio.h>

int main()
{
    int n=2022;
     if( n%400==0||( n%4==0&&n%100!=0 ) )
            printf("True");
        else
            printf("False");
}