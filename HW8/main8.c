#include <stdio.h>
void print_spaces(int r,int rows){
     printf("%*c" , (rows - r) / 2 + 1, 0 );
}
void print_stars(int r){
    printf("*");
}
void reverse_triangle(int row){
    row=row*2-1;
    for(int i = row; i >0; i-=2) {
        print_spaces(i,row);
        for(int j = 0; j < i; ++j)
            print_stars(i);
        printf("\n");
    }
}
void original_triangle(int row){
    
    row=row*2-1;
    for(int i = 3; i <= row; i+=2) {
        printf("%*c" , (row - i) / 2 + 1, 0 );
        for(int j = 0; j < i; ++j)
            printf("*");
        printf("\n");
    }
}
int main()
{   
    int row=4;
    reverse_triangle(row);
    original_triangle(row);
    return 0;
}
