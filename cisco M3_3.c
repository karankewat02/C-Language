#include <stdio.h>

int main()
{
	int x;
	float a;
	printf("Insert the value :  ");
	scanf("%f",&a);
	//convertion of float to integer
	x= a+(0.5);
	printf("The integer value of the given float is : %d \n",x);

	if(1<= a <=2){
	    printf("Very Bad. \n");
	}
        else if(2<=a<=3){
            printf("Bad. \n");
        }
        else if(3<=a<=4){
            printf("Neutral. \n");
        }
        else if(4<=a<=5){
            printf("Good. \n");
        }
        else if(5<=a<=6){
            printf("Very Good. \n");
        }
            else{
                printf("\n");
            }
	return 0;
}
