#include <stdio.h>
#include <stdlib.h>

int main()
{
    double amount;
    double cost;

    scanf("%lf",&amount);

    cost = ((int)amount/120 + 1) * 45;

    printf("%d\n",(int)cost);
    return 0;
}
