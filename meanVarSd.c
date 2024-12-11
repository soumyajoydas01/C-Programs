//Mean, Variance, Standard Deviation
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int i,n;
    float s[20], sum, sqrsum, mean, var, sd;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <=n; i++)
    {
        printf("\n Enter the value of s[%d]: ", i);
        scanf("%f", &s[i]);
    }

    sum=sqrsum=0;
    for ( i = 1; i <=n; i++)
    {
       sum=sum+s[i];
       sqrsum=sqrsum+(s[i]*s[i]);
    }

    mean=sum/n;
    var=sqrsum/n - (mean*mean);
    sd=sqrt(var);
    printf("\n mean=%8.4f \n Var= %8.4f \n S.D = %8.4f", mean,var,sd);

    return 0;
    

}