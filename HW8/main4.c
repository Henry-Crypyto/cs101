# include <stdio.h>
int main(void) {
    float a=2.533333;
    int n = a * 10;
    if((n%10)<=4){
        printf("apple is % .2f\n",floor(a));
    }
    else{
        printf("apple is % .2f\n",ceil(a));
    }
    
    return 0;
}