#include <stdio.h>
#include <stdlib.h>

int main()
{
    double kilometers = 0;
    double miles = 0;

    printf("Please enter kilometer:\n");

    scanf("%lf",&kilometers);

    miles = 0.621371 * kilometers;

    printf("%.6lf",miles);

    return 0;
}
