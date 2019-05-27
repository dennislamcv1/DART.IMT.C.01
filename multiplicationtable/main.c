#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eight = 0;
    int i;

    for(i=0;i<11;i++)
    {
        printf("%dx8 = %d\n",eight,eight*8);
        eight = eight + 1;
    }


    return 0;
}
