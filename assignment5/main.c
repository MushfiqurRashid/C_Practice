#include <stdio.h>
#include <stdlib.h>

int main()

{
    int a,b,c,youngest;

    printf("Enter the age of Rum");
    scanf("%d", &a);
    printf("Enter the age of Sham");
    scanf("%d", &b);
    printf("Enter the age of Ajay");
    scanf("%d", &c);

    youngest = a;

    if (b<youngest) youngest = b;
    if (c<youngest) youngest = c;

    printf("Younest: %d", youngest);


    return 0;
}
