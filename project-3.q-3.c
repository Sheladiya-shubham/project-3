#include <stdio.h>

 main()
{
    int digit,fn,ln, sum;
    
    printf("Enter a number: ");
    scanf("%d",&digit);

    ln = digit % 10;

    fn = digit;
    
    while (fn >= 10)
	 {
        fn /= 10;
    }

    sum = fn + ln;

    printf("The sum of the first and last digits is:%d\n",sum);

}