#include <stdio.h>

int main()
{   
    int row=5;
    row=row*2-1;
    for(int i = row; i >0; i-=2) {
        printf("%*c" , (row - i) / 2 + 1, 0 );
        for(int j = 0; j < i; ++j)
            printf("*", i);
        printf("\n");
    }
    return 0;
}