#include <stdio.h>
#include <stdlib.h>

int main()
{
    //(enginePower + resistance) * (weight - height)
    int enginepower = 0;
    int resistance = 0;
    int weight = 0;
    int height = 0;
    int robot = 0;
    int i = 0;
    int sum = 0;
    int result = 0;

    printf("The number of robots to be deployed\n");

    scanf("%d",&robot);



    for(i=0;i<robot;i++)
        {
            printf("Please enter height,weight,engine power,resistance:\n");

            scanf("%d %d %d %d",&height,&weight,&enginepower,&resistance);
            sum = (enginepower + resistance) * (weight - height);
            result+=sum;

        }
        printf("%d\n", result);

    return 0;
}
