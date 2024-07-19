#include <stdio.h>

//	Q.2 Digit Counter

 main()
{
    int digit, total = 0;

    printf("Enter a number: ");
    scanf("%d", &digit);

    if (digit < 0)
	{
        digit = -digit;
    }

        while (digit != 0) 
		{
            digit/= 10; 
            total++;   
		}
    printf("Total number of digits:%d\n",total);
}