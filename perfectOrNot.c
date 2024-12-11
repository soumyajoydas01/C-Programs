//Perfect or Not
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int i,n,r,sum=0,s;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    s=n;

    for ( i = 1; i <=n/2; i++)
    {
        r=n%i;
        if(r==0){
            sum=sum+i;
        }
    }
    if (sum==s)
    {
        printf("\nThe given number %d is Perfect",s);
    }else
    {
        printf("\nThe given number %d is Not Perfect",s);
    }
    
    return 0;
    
}