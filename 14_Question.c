#include<stdio.h>
#include<conio.h>
#include<math.h>
int gcdnonR(int i,int j){
   int rem;
   rem=i-(i/j*j);
   if(rem==0)
      return j;
   else
      gcdnonR(j,rem);
}// Name- Vedant Roy  Branch- B.Tech AI and ML  Batch-B2B  Enrollment Number-12019011621
int main(){
   int a,b;
   printf("Enter the two numbers for finding the GCD: ");
   scanf("%d%d",&a,&b);
   printf("GCD of %d and %d is %d",a,b, gcdnonR(a,b));
   return 0;
}