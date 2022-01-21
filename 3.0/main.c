#include <stdio.h>

int main()
{
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);


    if(num > 0)
    {
        printf("Number is Positive");
    }
    if(num < 0)
    {
        printf("Number is Negetive");
    }
    if(num == 0)
    {
        printf("Number is Zero");
    }

    return 0;
}
