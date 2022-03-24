#include <stdio.h>

int main()
{
	char firstLetter = 'A';
	char firstSmallLetter = 'a';
	char lastLetter = 'Z';
	char lastSmallLetter = 'z';
	printf("Upper case letters beetween (and with) 'A' and 'Z' is : %d\n",
		lastLetter-firstLetter+1);
	printf("Lower case letters beetween (and with) 'a' and 'z' is : %d\n",
		lastSmallLetter-firstSmallLetter+ 1);
	return 0;
}
