#include <stdio.h>

void add(int num){
    int unitPlace,tenPlace,hundredPlace,total;
    
    if(num>=0){
    unitPlace=num/1%10;
    tenPlace=num/10%10;
    hundredPlace=num/100%10;
    total=unitPlace+tenPlace+hundredPlace;
    }else{
    num*=-1;    
    unitPlace=num/1%10;
    tenPlace=num/10%10;
    hundredPlace=num/100%10;
    total=unitPlace+tenPlace+-1*hundredPlace;
    }
    printf("%d\n",total);
}

int main()
{
    int a=-999,b=999,total;
    add(a);
    add(b);
}