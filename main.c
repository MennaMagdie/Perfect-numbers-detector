#include <stdio.h>
#include <stdlib.h>

int x,remainder;
int sum = 0;
int main()
{
    printf("Enter the number you want to check\n");
    scanf("%d",&x);

    for (int i=1 ; i < x ; i++)
    {
        remainder = x%i ;

        if (remainder == 0)
        {
            sum = sum + i;
        }
    }
    if (sum==x)
    {
        printf("%d is a perfect number",x);

    }
    else
    {
        printf("%d isn't a perfect number",x);
    }


    return 0;
}
