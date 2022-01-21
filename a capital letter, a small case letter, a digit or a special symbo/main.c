#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter a Character:");
    scanf("%c", &ch);
    if (ch>=65 && ch<=90)
    {
        printf("Capital letter!!!\n");
    }
    else if (ch>=97 && ch<=112)
    {
        printf("A small case letter!!!\n");
    }
    else if (ch>=48 && ch<=57)
    {
         printf("A digit!!!\n");
    }
    else if((ch>=0 && ch<=47) || (ch>=58&& ch<=64) || (ch>=91 && ch<=96) || (ch>=123 && ch<=127))
    {
        printf("Special symbol!!!\n");
    }
     return 0;
}

