#include<stdio.h>

int main()
{
    int x,y,z;
    float swaper;
    float numbers[10] = {5.6, 4.3, 6.2, 6.4, 7.3, 2.3, 8.3, 9.2, 0.1, 1.9};
    for(x=0;x < 9;x++){
        for(z = 0;z < 10 ;z++){
            printf("%.2f ",numbers[z]);

            }
        for(y = 0; y < 9 - x; y++){
            if(numbers[y] < numbers[y + 1]){
                swaper =  numbers[y];
                numbers[y ] = numbers[y +1];
                numbers[y + 1] = swaper;
            }
        }
    }
    puts("");
    printf("SORTED ARRAY : \n ");
    for(x = 0;x < 10 ;x++){
        printf("%.2f \n",numbers[x]);
    }
return 0;
}
