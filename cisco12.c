#include <stdio.h>

int main()
{
    int a,b;
    printf("DAY :");
    scanf("%d",&a);
    printf("MONTH :");
    scanf("%d",&b);
    if(b == 1){
        printf("The day of the year : %d \n",a);
    }
                else if(b == 2){
                    printf("The day of the year :  \n",31+a);
                }
                else if(b==3){
                    printf("The day of the year : %d \n",29+31+a);
                }
                else if(b==4){
                    printf("The day of the year : %d \n",29+2*31+a);
                }
                else if(b==5){
                    printf("The day of the year : %d \n",29+2*31+30+a);
                }
                else if(b==6){
                    printf("The day of the year : %d \n",a+31*2+30*2+29);
                }
                else if(b==7){
                    printf("The day of the year : %d \n",a+29+3*30+2*31);
                }
                else if(b==8){
                    printf("The day of the year : %d \n",a+29+31*3+30*3);
                }
                else if(b==9){
                    printf("The day of the year : %d \n",a+29+30*4+31*3);
                }
                else if(b==10){
                    printf("The day of the year : %d \n",a+29+30*4+31*4);
                }
                else if(b==11){
                    printf("The day of the year : %d \n",a+29+30*5+31*4);
                }
                else if(b==12){
                    printf("The day of the year : %d \n",a+29+30*5+31*5);
                }
    else{
        printf("Wrong input \n");
    }
	return 0;
}
