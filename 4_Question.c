# include<stdio.h>
# include<math.h>
int main(){
    int a;
    printf("Enter a number to check whether it is armstrong number or not\n");
    scanf("%d", &a);
    int l, j;
    j= l = a;
    int b, n=1;
    float sum=0;
    while(l/10!=0){
        l=l/10;   // Determination of power to raise the individual numbers before adding them with each other
        n++;      // to check if armstrong or not based on the number of digits present in the number
    }
    while (a%10!=0){
        b=a%10;
        sum = sum + pow(b,n);
        a=a/10; 
    } //Name- Vedant Roy  Branch - B.Tech AI and ML  Enrollment Number- 12019011621   Batch- B2B
    sum= sum+ pow(a,n);
    if (sum==j){
        printf("%d is an armstrong number",j);
    }
    else if(sum!=j){
        printf("%d is not an armstrong number",j);
    }
    return 0;
}