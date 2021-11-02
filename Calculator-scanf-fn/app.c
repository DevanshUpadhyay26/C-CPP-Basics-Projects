#include <stdio.h>
int main(void)
{
    char option;
    int no1,no2;
    float reslt;
    printf("Enter your operation , Operators avaiables: (+,-,/,*)\n");
    scanf("%c",&option);
    // using if else
    if(option =='+'){
        printf("U HAVE SELECTED ADDITON FOR CALCULATION");
    }
    else if(option =='-'){
        printf("U HAVE SELECTED SUBSTRACTION FOR CALCULATION");
    }
    else if(option == '/'){
        printf("U HAVE SELECTED DIVISION FOR CALCULATION");
    }
    else if(option == '*'){
        printf("U HAVE SELECTED MULTIPLICATION FOR CALCULATION");
    }
    printf("\nEnter First Number");
    scanf("%d",&no1);
    printf("\nEnter Secound Number");
    scanf("%d",&no2);
    switch (option)
    {
    case '+':
        reslt=no1+no2;
        printf("ADDITION OF %d AND %d IS %2f", no1,no2,reslt);
        break;
    case '-':
        reslt=no1-no2;
        printf("SUBSTRACTION OF %d AND %d IS %2f", no1,no2,reslt);
        break;
    case '*':
        reslt=no1*no2;
        printf("MULTIPLICATION OF %d AND %d IS %2f", no1,no2,reslt);
        break;
    case '/':
        if(no2==0)
        {
            printf("\nDIVISOR CANNOT BE ZERO, KINDLY ENTER ANOTHER NUMBER");
            scanf("%d",&no2);
        }
        else{
            reslt=no1/no2;
            printf("DIVISION OF %d and %d is %2f",no1,no2,reslt);
        }
    default:
        printf("PLEASE ENTER CORRECT INPUT");
        break;
    }
    return 0;
}