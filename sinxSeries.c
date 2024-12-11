//Sine series
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    int n=1;
    float x,y,sum, term;
    printf("Enter the valiue of x= ");
    scanf("%f", &x);
    y=x*22/(7*180);
    sum=y;
    term=y;
    while(fabs(term)>0.00001)
    {
        term=term*(-1)*y*y/(2*n*(2*n+1));
        sum=sum+term;
        n=n+1;
    }

    printf("The required value of sinx for x=%f is %f",x,sum);

    return 0;
}