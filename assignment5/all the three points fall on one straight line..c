#include<stdio.h>
int main()
{
    int x1,x2,x3,y1,y2,y3,slope1,slope2;
    printf("Enter first co-ordinate (x1,y1):");
    scanf("%d%d", &x1,&y1);
    printf("Enter second co-ordinate (x2,y2):");
    scanf("%d%d", &x2,&y2);
    printf("Enter third co-ordinate (x3,y3):");
    scanf("%d%d", &x3,&y3);

    slope1 = (y2-y1)/(x2-x1);
    slope2 = (y3-y2)/(x3-x2);

    if(slope1==slope2)
    {
        printf("\nAll the three points fall on one straight line. ");
    }
    else
        printf("\nAll the three points does not fall on one straight line. ");

    return 0;
}
