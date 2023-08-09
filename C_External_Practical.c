# include<stdio.h>
// Write a program to perform arithmetic operations using switch statement
int main(){
    float a, b;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    int i;
    printf("Press 1 for addition of two numbers.\n Press 2 for subtraction of first number by second number.\n");
    printf("Press 3 for division of first number by second number.\n Press 4 for multiplication of first and second number\n");
    scanf("%d", &i);
    float c;
    switch (i)
    {
    case 1:
  
       printf("%f", a+b);
    break;

    case 2:
        printf("%f",a-b);
    break;
    
    case 3:
        printf("%f", (float)(a/b));
    break;

    case 4:
        printf("%f", a*b);
    break;

    default:
        printf("Enter any valid number from 1 to 4");
        break;
    }
    return 0;
}
