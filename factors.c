// factors.c
#include <stdio.h>

int main() {
    long long int num;

    while (scanf("%lld", &num) != EOF) {
        long long int factor1 = 2;
        long long int factor2 = 1;
        long long int i;

        if (num % 2 == 0) {
            factor2 = num / 2;
            printf("%lld=%lld*%lld\n", num, factor1, factor2);
            continue;
        }

        for (i = 3; i * i <= num; i += 2) {
            if (num % i == 0) {
                factor2 = num / i;
                printf("%lld=%lld*%lld\n", num, i, factor2);
                break;
            }
        }

        if (factor2 == 1) {
            printf("%lld=%lld*1\n", num, num);
        }
    }
    return 0;
}
