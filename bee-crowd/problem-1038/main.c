#include <stdio.h>
int main()
{
    int x, y;
    float price = 0;
    scanf("%d%d", &x, &y);
    if (x == 1)
    {
        price = 4.00 * y;
    }
    else if (x == 2)
    {
        price = 4.50 * y;
    }
    else if (x == 3)
    {
        price = 5.00 * y;
    }
    else if (x == 4)
    {
        price = 2.00 * y;
    }
    else if (x == 5)
    {
        price = 1.50 * y;
    }
    printf("Total: R$ %.2f\n", price);

    return 0;
}