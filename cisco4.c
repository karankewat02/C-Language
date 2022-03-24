#include <stdio.h>

int main()
{
	int a,b;
	printf("Enter 1st no.");
	scanf("%d",&a);
	printf("Enter 2nd no.");
	scanf("%d",&b);
	while(a,b != 0){
	    printf("Sum : %d \n",a+b);
	    scanf("%d",&a);
	    scanf("%d",&b);
	    }
    if(a == 0){
            printf("Sum : %d \n",a+b);
                return 0;
	    }
    if(b == 0){
            printf("Sum : %d \n",a+b);
                return 0;
	    }

    if(a == 99){
            printf("FINISH");
                return 0;
        }
    if(b == 99){
            printf("FINISH");
                return 0;
        }
	return 0;
}



















