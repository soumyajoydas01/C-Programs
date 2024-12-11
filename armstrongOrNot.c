//Armstrong or Not
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int r,n,m,sum=0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    m=n;
    while (n>0)
    {
        r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if (sum==m)
    {
        printf("The given number %d is Armstrong", m);
    }else
    {
        printf("The given number %d is Not Armstrong", m);
    }
    
    return 0;
    
}