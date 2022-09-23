#include <stdio.h>
int main()
{
    int array[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (array[i] < array[i + 1])
        {
            printf("C");
        }
        else if (array[i] > array[i - 1])
        {
            printf("D");
        }
    }
    return 0;
}
