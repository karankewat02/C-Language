#include <stdio.h>

int main()
{
	int a,b,c,d;
	printf("first digit of ip :");
	scanf("%d",&a);
	printf("Second digit of ip :");
	scanf("%d",&b);
	printf("Third digit of ip :");
	scanf("%d",&c);
	printf("fourth digit of ip :");
	scanf("%d",&d);
	if(0 <= a,b,c,d <= 255){
	    printf("The Input IP is %d.%d.%d.%d \n",a,b,c,d);
	    printf("The 32 bit form of the given Ip is :%d%d%d%d \n",a*256*256*256,b*256*256,c*256,d*1);
	}
	else{
	    printf("wrong input \n");
	}
	return 0;
}
