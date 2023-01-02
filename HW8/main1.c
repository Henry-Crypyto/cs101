#include <stdio.h>

int main()
{
    int row = 10;
    for(int i = 1; i <= row; i+=2) {
        printf("%*c" , (row - i) / 2 + 1, 0 );
        for(int j = 0; j < i; ++j)
            printf("*", i);
        printf("\n");
    }
    return 0;
}