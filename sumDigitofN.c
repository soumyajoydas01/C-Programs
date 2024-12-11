//Sum of Digits of a Natural number
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the natural number ");
    scanf("%d",&n);
    int sum=0;

    while (n>0)
    {
        sum=sum+n%10;
        n=n/10;
    }

    printf("Sum = %d", sum);
    
}