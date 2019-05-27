#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    int i;

    //printf("Please enter a number: ");
    scanf("%d",&input);

    for(i=0;i<11;i++)
    {
        printf("%dx%d = %d\n",i,input,i*input);

    }


    return 0;
}
