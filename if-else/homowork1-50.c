#include <stdio.h>
int main()
{

    int Ram, Shyam, Ajay;
    printf("Enetr a Ram age: ");
    scanf("%d",&Ram);
    printf("Enetr a Shyam age: ");
    scanf("%d",&Shyam);
    printf("Enetr a Ajay age: ");
    scanf("%d",&Ajay);

    if (Ram < Shyam)
    {
        if (Ram < Ajay)
        {
            printf("%d is youngest", Ram);
        }
        else
        {
            printf("%d is youngest", Ajay);
        }
    }
    if (Shyam < Ram)
    {
        if (Shyam < Ajay)
        {
            printf("%d is youngest", Shyam);
        }
        else
        {
            printf("%d is youngest", Ajay);
        }
    }
    else
    {
        printf("%d is youngest", Ajay);
    }
    return 0;
}