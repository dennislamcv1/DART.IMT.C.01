#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grades;
    int i;
    int input;
    int sum;

    scanf("%d",&grades);

    for(i=0;i<grades;i++)
    {
        scanf("%d",&input);
        sum += input;
    }

    printf("%d\n",sum);
    return 0;
}
