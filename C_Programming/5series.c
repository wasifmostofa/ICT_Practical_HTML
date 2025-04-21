#include<stdio.h>

int main(){
    printf("Summation of the series \n 1*2+2*3+3*4+...+n*(n+1)");
    int i,sum=0,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum=sum+(i*(i+1));
    }
    printf("The sum of n number of terms:%d",sum);
    

    return 0;
    
}
