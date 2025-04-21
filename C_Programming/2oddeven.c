#include<stdio.h>

int main(){
    int x;
    printf("Enter a number to be tested:");
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("The number %d is even.",x);
    }
    else{
        printf("The number %d is odd.",x);
    }

    return 0;
}