#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grades;
    int i;
    int input;
    int sum = 0;

    scanf("%d",&grades);

    for(i=0;i<grades;i++)
    {
        scanf("%d",&input);
        sum += input;
    }

    printf("%.2lf\n",(double)sum/grades);
    return 0;
}
