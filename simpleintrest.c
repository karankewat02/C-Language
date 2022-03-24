#include<stdio.h>

int main()
{
    int p,t;
    float si,r;
    printf("Enter the principal amount \n");
    scanf("%d",&p);
    printf("Enter the Rate of Intrest \n");
    scanf("%f",&r);
    printf("Enter the Time interval \n");
    scanf("%d",&t);
    si=p*r*t/100;
    printf("THE SIMPLE INTREST IS : - \n");
    printf("%f",si);
    return 0;
 }
