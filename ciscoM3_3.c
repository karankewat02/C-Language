#include <stdio.h>

int main()
{
	int x;
	float a;
	printf("Insert the value :  ");
	scanf("%f",&a);
	//convertion of float to integer
	x= (float)a;
	printf("The integer value of the given float is : %d \n",x);

	if(1 <=  x  <=2 ){
	    printf("Very Bad. \n");
	}

	else{
	    if(2 <= x <= 3){
	    printf("Bad. \n");
        }
        if(3 <= x <= 4){
	    printf("Neutral. \n");
        }
        if(4 <= x <= 5){
	    printf("Good. \n");
        }
        if(5 <= x<= 6){
	    printf("Very Good. \n");
        }

	}
	return 0;
}
