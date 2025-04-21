#include<stdio.h>

int main(){
    int choice;
    float c,f;
    printf("Choose an input type\n 1.Celsius\n 2.Fahrenheit\n Enter your choice:");
    scanf("%d",&choice);
    if (choice==1)
    {
        printf("Enter temperature in Celsius:");
        scanf("%f",&c);
        f=(c * 9/5) + 32;
        printf("Converted temperature in Fahrenheit %.2f",f);
    }
    else if(choice==2)
    {
        printf("Enter temperature in Fahrenheit:");
        scanf("%f",&f);
        c=(f - 32) * 5 / 9;
        printf("Converted temperature in Celsius %.2f",c);
    }
    else
    {
        printf("Enter a number between 1 and 2");
    }
    

    return 0;
}