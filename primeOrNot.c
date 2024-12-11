//Prime or Not
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int i, n,flag=0;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for ( i = 2; i <=n/2; i++)
    {
        if((n%i)==0){
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        printf("\n The number is NOT prime");
    }else
    {
        printf("\n The number is prime");
    }
    
    return 0;
    
}