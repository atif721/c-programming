#include <stdio.h>
int main()
{
    // WAP to swap two integer number without using third variable

    int s, t;

    printf("Enter value of s & t: ");
    scanf("%d%d",&s,&t);

    printf("\nBefore swapping: s = %d, t = %d\n", s, t);

    // Swapping without a third variable
    s = s + t;
    t = s - t;
    s = s - t;

    printf("\nAfter swapping: s = %d, t = %d\n", s, t);

    return 0;
}
