#include <stdio.h>
int main()
{
    int i ,x =1,a;
    printf("Enter the no's whose table you want to know : ");
    scanf("%d",&a);

     do{
        printf("%d \n",a*x);
        x++;
     }while(x < 11);
     return 0;
}
