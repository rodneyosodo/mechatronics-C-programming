#include <stdio.h>

int main ()

{
	int number;
    printf("Enter a number you want to find if its even or odd: ");
    scanf("%d", &number);
    if ((number%2)==0)
    {
    	printf("%d is an even number\n", number);
    }
    else
    {
    	printf("%d is an odd number\n", number);
    }
    return 0;
    
}
