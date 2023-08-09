# include<stdio.h>
int main(){
    int First_Number;

    printf("Enter first number: ");
    scanf("%d", &First_Number);
    
    int Second_Number;
    printf("Enter second number: ");
    scanf("%d", &Second_Number);
    
    int Third_Number;
    printf("Enter third number: ");
    scanf("%d", &Third_Number);

    if (First_Number>Second_Number && First_Number>Third_Number){
        printf("First number is largest");
    }
    if (Second_Number>First_Number && Second_Number>Third_Number){
        printf("Second number is largest");
    }
    if (Third_Number>First_Number && Third_Number>Second_Number){
        printf("Third Number is largest");
    }
    return 0;

} 