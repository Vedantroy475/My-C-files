# include <stdio.h>
int main(){
    printf("In this program we will check if you are eligible to drive or not. \n");
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age>=18 && age<90){
        printf("You are eligible to drive.");
    }
    else if (age>=90){
        printf("Your age is 90 or above, hence you are not eligible to drive.");
    }
    else{
        printf("Your age is less than 18, hence you can't drive.");
    }
    return 0;
}