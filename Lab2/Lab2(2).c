#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned int n, s = 0;
    float p = 1;
    scanf("%u", &n);
    int i, j;

    for (i = 1; i <= n; i++) {
        s += 2 * i + 1;
        p = p * (s / (2 * i * log(i + 3)));
    }
    printf("%f", p);
    return 0;
}
