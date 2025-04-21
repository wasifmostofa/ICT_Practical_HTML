#include<stdio.h>

int main(){
    int a,b;
    float sum,avg;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    sum=a+b;
    avg=sum/2;
    printf("Sum of %d and %d is %.2f\n",a,b,sum);
    printf("Average of %d and %d is %.2f\n",a,b,avg);

    return 0;
}