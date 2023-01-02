# include <stdio.h>
void print_house(int height){
    height=height*2-1;
    for(int i = 1; i <= height; i+=2) {
        printf("%*c" , (height - i) / 2 + 1, 0 );
        for(int j = 0; j < i; ++j){
            printf("*");
        }
        printf("\n");
    }
    for(int i=0;i<height;i++){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<(height+1)/2;i++){
        for(int j=0;j<height;j++){
        if(j==0||j==height-1){
            printf("*");
        }else{
            printf(" ");
        }
      }
      printf("\n");
    }
    for(int i=0;i<height;i++){
        printf("*");
    }
}
int main() {
    int n=4;
    print_house(n);
    
    return 0;
}


    