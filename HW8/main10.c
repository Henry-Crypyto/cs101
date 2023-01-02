#include<stdio.h>
int get_digit(int n){
    int sum=0;
    while(n!=0){
		sum=sum*10+n%10;
		n=n/10; 
	}
	printf("%d",sum);
}
int main()
{
	int n=1234,sum=0;
	get_digit(n);
	
	return 0;
}