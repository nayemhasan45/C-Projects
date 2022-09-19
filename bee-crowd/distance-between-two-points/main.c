#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, distance;
    scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
    distance = sqrt(pow((c - a), 2) + pow((d - b), 2));
    printf("%.4f \n", distance);

    return 0;
}