#include<stdio.h>

int main(){
    int x,y,l,lcm;
    printf("Enter the first number:");
    scanf("%d",&x);
    printf("Enter the second number:");
    scanf("%d",&y);
    l=(x>y)?x:y;
    while (1)
    {
        if (l%x==0 && l%y==0)
        {
            lcm=l;
            break;
        }
        l++;
    }
    printf("LCM of %d and %d is %d",x,y,lcm);

    return 0;
}