#include<stdio.h>
int main(){
    printf("Enter a year:");
    int a;
    scanf("%d",&a);
    if((a%4==0 && a%400==0) || (a%100!=0)){
        printf("%d leap year",a);
    }else
    {
        printf("%d is not a leap year",a);
    }
    
    return 0;
}