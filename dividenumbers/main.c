#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celsius;
    double fahrenheit;

    scanf("%lf",&celsius);

    fahrenheit = celsius*9.0/5.0 + 32.0;

    printf("%.1lf\n",fahrenheit);

    return 0;
}
