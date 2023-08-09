# include<stdio.h>
int main(){
    printf("In this program, give two numbers and we will tell you which one is greater \n");
    float a,b;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    if (a>b){
        printf("%f number is greater than %f",a,b);
    }
    else {
        printf("%f number is greater than %f",b,a);
    }
    return 0;
}