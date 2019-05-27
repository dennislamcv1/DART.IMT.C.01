#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Dear Procrastinator,\n");
    printf("You still have to wait for %d days (%d minutes or %d seconds) before you can procrastinate!",25-23,(60 * 24 * (25-23)),(60 * (60 * 24 * (25-23))));
    return 0;
}
