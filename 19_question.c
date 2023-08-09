#include <stdio.h>
// function to get matrix elements entered by the user
void getMatrixElements(int matrix[][10], int row, int column) {
// Name- Vedant Roy  Batch- B2B  Branch - B.Tech AI and ML  Enrollment Number-12019011621
   printf("\nEnter elements: \n");
    for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("Enter a%d%d: ", i + 1, j + 1);
         scanf("%d", &matrix[i][j]);
      }
   }
}
void multiplyMatrices(int first[][10], // --->  function to multiply two matrices
                      int second[][10],
                      int result[][10],
                      int r1, int c1, int r2, int c2) {
   for (int i = 0; i < r1; ++i) {  // ----> Initializing elements of matrix mult to 0.
      for (int j = 0; j < c2; ++j) {
         result[i][j] = 0;
      }
   }
   for (int i = 0; i < r1; ++i) { //---> Multiplying first and second matrices and storing it in result
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c1; ++k) {
            result[i][j] += first[i][k] * second[k][j];
         }
      }
   }
}
void display(int result[][10], int row, int column) {  //----> function to display the matrix
    printf("\nOutput Matrix:\n");
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         printf("%d  ", result[i][j]);
         if (j == column - 1)
            printf("\n");
      }
   }
} // Name- Vedant Roy  Branch- B.Tech AI and ML  Batch- B2B  Enrollment Number- 12019011621
   int main() {
   int first[10][10], second[10][10], result[10][10], r1, c1, r2, c2;
   printf("Enter rows and column for the first matrix: ");
   scanf("%d %d", &r1, &c1);
   printf("Enter rows and column for the second matrix: ");
   scanf("%d %d", &r2, &c2);
   while (c1 != r2) { // ----> Taking input until 1st matrix columns is not equal to 2nd matrix row
      printf("Error! Enter rows and columns again.\n");
      printf("Enter rows and columns for the first matrix: ");
      scanf("%d%d", &r1, &c1);
      printf("Enter rows and columns for the second matrix: ");
      scanf("%d%d", &r2, &c2);
   }
   getMatrixElements(first, r1, c1);  // ---->  get elements of the first matrix
   getMatrixElements(second, r2, c2); //----> get elements of the second matrix
   multiplyMatrices(first, second, result, r1, c1, r2, c2);  //-----> multiply two matrices.
   display(result, r1, c2);  //---> display the result
    return 0;
}