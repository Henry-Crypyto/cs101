/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char a[] = "-9 8 7 6 5 -4 3 -2 1";
   int i = 4,b_size = 0;
   int array_size;
   
   array_size=sizeof(a)-1;
   int b[9]={0};
   
   for(int i=0;i<array_size;i++){
       if(a[i]=='-'){
        i++;
        b[b_size]=(a[i]-48)*-1;
        b_size++;
       }else if(a[i]!='-'&&a[i]!=' '){
           b[b_size]=a[i]-48;
        b_size++;
       }
   }
   
  for(int i=b_size-1;i>0;i--){
      for(int j=0;j<i;j++){
        if(b[j]>b[j+1]){
            int temp;
            temp=b[j];
            b[j]=b[j+1];
            b[j+1]=temp;
        }   
      }
  }
  printf("%d\n",b[i-1]);
}
//printf("%d",a[1]-48);