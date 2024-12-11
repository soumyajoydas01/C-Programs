//Peterson or Not
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    int n, sum=0, m, i, fact;
    printf("Enter the number: ");
    scanf("%d", &n);
    m=n;
    while (m>0)
    {
        fact=1;
        for ( i = 1; i <=m%10; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        m=m/10;
    }

    if(sum==n){
        printf("\n The given number is Peterson");
    }else
    {
        printf("\n The given number is Not Peterson");
    }
    
    return 0;

}