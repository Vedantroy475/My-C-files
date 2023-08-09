#include<stdio.h>
int main(){
    int i;
    printf("Enter the number of elements for array: ");
    scanf("%d", &i);
   
    int array[i];
   
    for (int x=0;x<i;x++){
        printf("Enter %d element: \n", x+1);
        scanf("%d", &array[x]); 
       
    }
    printf("The array elements are: \n");
    for (int y=0; y<i; y++){
        printf("%d ", array[y]);
    }

    ;
}
