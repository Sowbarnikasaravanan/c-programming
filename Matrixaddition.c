//To add the two matrices
#include <stdio.h>
void main() {
  int row, col, a[10][10], b[10][10], sum[10][10], i, j;
  printf("Enter the number of rows: ");
  scanf("%d", &row);
  printf("Enter the number of columns: ");
  scanf("%d", &col);
  printf("Enter elements of 1st matrix:\n");
  for (i = 0; i < row; i++)
    for (j = 0; j < col; j++) {
      printf("Enter elements of a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < row; i++)
    for (j = 0; j < col; j++) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < row; i++)
    for (j = 0; j < col; j++) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (i = 0; i < row;i++)
    for (j = 0; j < col; j++) {
      printf("%d   ",sum[i][j]);
      if (j == col - 1) {
        printf("\n\n");
      }
    }

  return 0;
}
Run Code
Output
