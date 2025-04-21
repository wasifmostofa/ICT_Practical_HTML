#include<stdio.h>

int main(){
    int t,s,l;
    printf("Enter the largest number:");
    scanf("%d",&l);
    printf("Enter the smallest number:");
    scanf("%d",&s);
    do
    {
        t=l%s;
        l=s;
        s=t;
    } while (t!=0);
    printf("GCD is %d",l);
    

    return 0;
}    