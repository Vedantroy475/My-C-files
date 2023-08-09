# include<stdio.h>
int factorial(int n);
int main(){
    int a;
    printf("Enter a number to find its factorial\n");
    scanf("%d", &a);
    printf("So the value of factorial of the given number is %d",factorial(a));
    return 0;
    //Name- Vedant Roy  Branch - B.Tech AI and ML  Batch-B2B  Enrollment Number-12019011621 
}

int factorial(int n){
    if (n==0){
        return 1;
    }
    int result=1;
    while (n>1){
        result*= n;
        n--;
    }
    return result;
}