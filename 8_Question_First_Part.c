# include <stdio.h>
int main(){
    printf("In this program give your age and we will see if you are eligible to vote or not \n");
    int age;
    printf("What is your age: ");
    scanf("%d", &age);
    if (age>=18){
        printf("You are eligible to vote");
    }
    else {
        printf("You are not eligible to vote");
    }
    return 0;
}
