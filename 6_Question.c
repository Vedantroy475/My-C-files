# include<stdio.h>
# include<conio.h>
int main(){
printf("In this program we are going to evaluate the expression (ax+b)/(ax-b)\n");
float a,b,x;
float s;
printf("Enter the values of a,b and x: ");
scanf("%f%f%f", &a, &b, &x);
s=(a*x+b)/(a*x-b);
printf("The resultant value is: %f",s);
getch();
return 0;

}