#include <stdio.h>
int main()
{
    int n, hour, hourLeft, min, minLeft, sec;
    scanf("%d", &n);
    hour = n / 3600;
    hourLeft = n % 3600;
    min = hourLeft / 60;
    minLeft = hourLeft % 60;
    sec = minLeft % 60;
    printf("%d:%d:%d\n", hour, min, sec);
    return 0;
}