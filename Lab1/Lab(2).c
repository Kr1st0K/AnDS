#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    scanf("%f", &x);
    if ((x < -19) || ((x > -3) && (x <= 0)))
        printf("The function value at this value of the parameter: %f", (2 * x * x * x + 8 * x * x));
    else
        if ((x >= 8) && (x < 23))
            printf("The function value at this value of the parameter: %f", (-5 * x * x * x + 10));
        else
            printf("Function does not exist at this parameter value.");
    return 0;
}
