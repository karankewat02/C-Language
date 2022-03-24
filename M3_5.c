#include<stdio.h>
int main(void){
    //float x,y;
    int i = 7, j = i - i;
    while(i){
        i /= 2;
        j++;
    }

    printf("%d",i);
    return 0;
}
//0
