#include <stdio.h>

int main()
{
	int a,b,c,d;
	 printf("insert the 1st value of IP Adress \n");
	scanf("%d",&a);
	printf("insert the 2nd value of IP Adress \n");
	scanf("%d",&b);
	printf("insert the 3rd value of IP Adress \n");
	scanf("%d",&c);
	printf("insert the 4th value of IP Adress \n");
	scanf("%d",&d);/*INPUTED THE DATA*/
	if (a,b,c,d > 0,a,b,c,d <= 225){

	printf("Human-readable IP address is: %d.%d.%d.%d \n",a,b,c,d);
	printf("IP address as a 32-bit number: %ul%ul%ul%ul \n",256*256*256*a,256*256*b,256*c,1*d);
	}
	else{
	    printf("Incorrect IP Address \n");
	}

	return 0;
	}


