#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned int n, s;
    float p = 1;
    scanf("%u", &n);
    int i, j;
    for (i = 1; i <= n; i++) {
        s = 0;
        for (j = 1; j <= i; j++) {
            s += 2 * j + 1;
        }
        p *= s / (2 * i * log(i + 3));
    }
    printf("%f", p);
    return 0;
}
