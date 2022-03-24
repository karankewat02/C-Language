#include<stdio.h>
int main ()
{
    int s;
    float h,F;
    printf("PLease enter the basic salary \n");
    scanf("%f",&s);
    printf("\n",s);
    h=s*0.2;
    F=s*0.4;
    printf("THE HOUSE RENT = Rs. %d \n",&h);
    printf("THE FAMILY ALLOWANCE = Rs. %d",F);
    return 0;

}
