#include <stdio.h>
#include <stdlib.h>

int main()
{
    int current;
    double projected;
    double future;

    scanf("%d",&current);

    scanf("%lf",&projected);

    future =  current * (1 + (projected/100));

    printf("%d",(int)future);
    return 0;
}
