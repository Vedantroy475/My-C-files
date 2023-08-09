#include <stdio.h>
int main()
{
    int i, num, sum = 0;

    /* Input a number from user */
    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);
    /* Calculate sum of all proper divisors */
    for(i = 1; i <= num / 2; i++)
    { /* If i is a divisor of num */
        if(num%i == 0)
        {
            sum += i;
        }
    }
    // Name - Vedant Roy, Batch - B2B,  Branch - B.Tech AI and ML   Enrollment Number- 12019011621
    //Check whether the sum of proper divisors is equal to num
    if(sum == num && num > 0)
    {
        printf("%d is a perfect number", num);
    }
    else
    {
        printf("%d is not a perfect number", num);
    }
    return 0;
}