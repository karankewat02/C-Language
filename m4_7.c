#include <stdio.h>

int main()
{
	char *a;
	char *arr[20];
	int i,x;
	for(i = 0; i < 4; i++)
        {

	    printf("Enter the name : ");
	    scanf("%s",&a);

	    arr[i]= a;

        }
	//for(x=0;x  < 4;x++){
	 //   printf("%s \n",arr[x]);
	//}
	printf("%s \n",arr[3]);
	printf("%s \n",arr[2]);
	printf("%s \n",arr[1]);
	printf("%s \n",arr[0]);
return 0;
}
