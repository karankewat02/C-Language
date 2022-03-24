#include <stdio.h>

int main()
{
	int x,jan,feb,mar,apr,may,jun,jly,aug,sep,oct,nov,dec;
	jan= 31;
	feb = 29;
	mar = 31;
	apr = 30;
	may = 31;
	jun = 30;
	jly = 31;
	aug = 31;
	sep = 30;
	oct = 31;
	nov = 30;
	dec = 31;
	printf("Insrt month No. : ");
	scanf("%d",&x);
	switch(x){
	    case 1:
	    printf("There are 0 days before the given month \n");
	    break;
	    case 2:
	    printf("There are %d days before the given month \n",jan);
	    break;
	    case 3:
	    printf("There are %d days before the given month \n",jan+feb);
	    break;
	    case 4:
	    printf("There are %d days before the given month \n",jan+feb+mar);
	    break;
	    case 5:
	    printf("There are %d days before the given month \n",jan+feb+mar+apr);
	    break;
	    case 6:
	    printf("There are %d days before the given month \n",jan+feb+mar+apr+may);
	    break;
	    case 7:
	    printf("There are %d days before the given month \n",jan+feb+mar+apr+may+jun);
	    break;
	    case 8:
	    printf("There are %d days before the given month \n",jan+feb+mar+apr+may+jun+jly);
	    break;
	    case 9:
	    printf("There are %d days before the given month \n",jan+feb+mar+apr+may+jun+jly+aug);
	    break;
	    case 10:
	    printf("There are %d days before the given month \n",jan+feb+mar+apr+may+jun+jly+aug+sep);
	    break;
	    case 11:
	    printf("There are %d days before the given month \n",jan+feb+mar+apr+may+jun+jly+aug+sep+oct);
	    break;
	    case 12:
	    printf("There are %d days before the given month \n",jan+feb+mar+apr+may+jun+jly+aug+sep+oct+nov);
	    break;
	    default :
	    printf("Error: no such month in my calendar.");
	    break;
	}
	return 0;
}
