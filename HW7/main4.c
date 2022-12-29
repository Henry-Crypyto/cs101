#include <stdio.h>

int main()
{
    int number=99;
    int unitPlace;
    int thousandPlace;
    if(number/1000>=1){
    unitPlace=number/1%10;
    thousandPlace=number/1000%10;
    number=number-unitPlace;
    number=number-1000*thousandPlace;
    number=number+1000*unitPlace;
    number=number+thousandPlace;
    }
    else{
    unitPlace=number/1%10;
    number=unitPlace*1000+number;
    number=number-unitPlace;
    }
    printf("%d",number);
}