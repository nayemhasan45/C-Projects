#include <stdio.h>
int main()
{
    int n = 5, a;
    scanf("%d", &a);
    if (1 <= a <= n)
    {
        int output = n - a;
        if (output % 2 == 0)
        {
            printf("Mohmoud");
        }
        else
        {
            printf("Ehab");
        }
    }
    return 0;
}