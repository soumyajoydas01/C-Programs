//Fibonacci Listing
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i,n,f[100];
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        if(i<=2)
        {
            f[i]=i;
        }
        else
        {
            f[i]=f[i-1]+f[i-2];
        }

        printf("\n f[%d]=%d",i,f[i]);
    }
    
    return 0;

}