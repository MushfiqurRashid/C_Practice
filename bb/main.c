#include<stdio.h>
int main()
{
	int Ajay,Ram,Shyam;
	printf("Enter ")


	if (Ajay<Ram && Ajay <Shyam)
    {
        printf("\nAjay is Youngest", Ajay);
    }
    else if(Ram<Ajay && Ram <Shyam)
    {
        printf("\nAjay is Youngest", Ram);
    }
    else if(Shyam<Ram && Shyam<Ajay)
    {
        printf("\nAjay is Youngest", Shyam);
    }
    else
        printf("\nAjay is Youngest");

	return 0;
}
