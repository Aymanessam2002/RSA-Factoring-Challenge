// factors.c
#include <stdio.h>

int main()
{
    long long int num;
    long int factor1;
    long int factor2;

    while (scanf("%lld", &num) != EOF)
    {
        factor1 = 2;
        while (num % factor1)
        {
            if (factor1 <= num)
            {
                factor1++;
            }
            else
            {
                printf("Error: Unable to factorize %lld\n", num);
                return (-1);
            }
        }

        factor2 = num / factor1;
        printf("%lld=%ld*%ld\n", num, factor1, factor2);
    }
    return 0;
}
