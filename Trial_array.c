#include<stdio.h>
int main(){
    int i;
    printf("Enter the number of elements for array: ");
    scanf("%d", &i);
    int *ptr =NULL;
    int array[i];
    ptr=array;
    for (int x=0;x<i;x++){
        printf("Enter %d element: \n", x+1);
        scanf("%d", ptr);
        ptr++;
    }
    printf("The array elements are: \n");
    for (int y=0; y<i; y++){
        printf("%d\n", array[y]);
    }

    return 0;
}
