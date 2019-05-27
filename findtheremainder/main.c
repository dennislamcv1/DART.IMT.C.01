#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matches;
    int boxes;

    scanf("%d",&matches);
    scanf("%d",&boxes);

    printf("%d\n",matches/boxes);
    printf("%d\n",matches%boxes);
    return 0;
}
