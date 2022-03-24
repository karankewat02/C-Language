#include<stdio.h>;

int main(){
int b=2,c=7,d=8;
float a,e,f;
printf("Enter the value of a \n");
scanf("%f",&a);
f=a;
if (f<=10){
    printf("value of a  is  %d \n",f);
    printf("enter the value of e \n");
    scanf("%f",&e);
    printf("sq of e is:  %f \n",e*e);
    }
else{
    printf("value of b is : %d \n",b);
    printf("value of c is : %d \n",c);
    printf("value of d is : %d \n",d);
}
return 0;
}
