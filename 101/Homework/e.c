#include <stdio.h>

int main ()

{
	int year;
    printf("Enter a year if you want to find its a leap year: ");
    scanf("%d", &year);
    if ((year%4)==0)
    {
    	printf("%d is leap year\n", year);
    }
    else
    {
    	printf("%d is not a leap year\n", year);
    }
    return 0;
    
}
