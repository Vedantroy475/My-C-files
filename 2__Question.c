# include <stdio.h>
int main(){
    printf("Give three numbers and I will give you the sum of them and their average\n");
    float a,b,c;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("Enter third number:  ");
    scanf("%f", &c);
    float d= a+b+c;
    printf("So the sum of three numbers is %f \n: ",d );
    printf("The average of the three numbers is %f \n: ",d/3);
    return 0;

}