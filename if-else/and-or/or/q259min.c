#include <stdio.h>
int main()
{

    int a, b, c;
    printf("Enter a frist number: ");
    scanf("%d", &a);

    printf("Enter a secund number: ");
    scanf("%d", &b);

    printf("Enter a thard number: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is greatest",a);
    }

    if (b > a && b > c)
    {
        printf("%d is greatest",b);
    }
    if (c > a && c > b)
    {
        printf("%d is greatest",c);
    }
    return 0;
}