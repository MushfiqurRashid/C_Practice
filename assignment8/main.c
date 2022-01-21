#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B;

    printf("Student's mark in A:");
    scanf("%d", &A);

    printf("Student's mark in B:");
    scanf("%d", &B);

    if(A>=55 && B>=45)
        printf("Student is passed!");
    else if (A>=45 && A<55 && B>=55)
        printf("Student is passed!");
    else if (A>=65 && B<45)
        printf("Student need to reappear for exam for B!");
    else
        printf("He is failled in the exam!");

    return 0;
}
