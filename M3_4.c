#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j,n;
    char ch;

    printf("Enter number of rows: ");
    scanf("%d%c",&n);
     printf("Enter the symbol: ");
     ch=getchar();

       i=1;
   do
               {
	 j=0;
                      do
                       {
                           printf(" ");
                       }while(j++<(n-i-1));
                    j=0;
                  do
                       {
                            printf("%c",ch);
                       }while(j++<i*2-2);
                           printf("\n");
               }    while(++i<n);       ;



    return 0;
}
