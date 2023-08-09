# include<stdio.h>
int main(){
    int i, j;
    printf("Enter any positive number\n");
    scanf("%d", &i);
    j=i;
    int n, s=0;
    while (i%10!=0){
        n=i%10;
        s=s+n;
        i=i/10;
    
    }
    s=s+i;
    printf("So the sum of individual digits of %d is %d",j,s);
    return 0;
    // Name - Vedant Roy   Batch - B2B   Enrollment Number- 12019011621  Branch- B.Tech AI and ML

}