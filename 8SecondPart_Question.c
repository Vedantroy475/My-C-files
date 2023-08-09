// In this program we are calculating the simple interest for the values given by user
# include <stdio.h>
int main(){
    float principal, rate, years;
    printf("Enter principal value: ");
    scanf("%f", &principal);
    printf("Enter value of rate: ");
    scanf("%f", &rate );
    printf("Enter years: ");
    scanf("%f", &years);
    float SimpleInterest= (principal*rate*years)/100;
    printf("The values of Simple Interest is %f", SimpleInterest);
    return 0;

}