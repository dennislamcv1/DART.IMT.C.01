#include <stdio.h>
#include <stdlib.h>

int main()
{
    double money;
    double price;
    double number;

    scanf("%lf",&money);
    scanf("%lf",&price);

    number = money/price;

    printf("%d\n",(int)number);
    return 0;
}
