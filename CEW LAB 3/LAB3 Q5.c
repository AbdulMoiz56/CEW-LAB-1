#define MAX_ROWS 100
#define MAX_COLS 100
void addMatrices(int (*mat1)[MAX_COLS], int (*mat2)[MAX_COLS], int (*result)[MAX_COLS], int rows,
int cols) {
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 *(*(result + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
 }
 }
}
void displayMatrix(int (*matrix)[MAX_COLS], int rows, int cols) {
 printf("Resultant Matrix:\n");
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 printf("%d\t", *(*(matrix + i) + j));
 }
 printf("\n");
 }
}
int main() {
 int matrix1[MAX_ROWS][MAX_COLS], matrix2[MAX_ROWS][MAX_COLS],
result[MAX_ROWS][MAX_COLS];
 int rows, cols;
 printf("Enter the number of rows and columns of matrices: ");
 scanf("%d %d", &rows, &cols);
 printf("Enter elements of matrix 1:\n");
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 printf("Enter element [%d][%d]: ", i + 1, j + 1);
 scanf("%d", &matrix1[i][j]);
 }
 }
 printf("Enter elements of matrix 2:\n");
 for (int i = 0; i < rows; i++) {
 for (int j = 0; j < cols; j++) {
 printf("Enter element [%d][%d]: ", i + 1, j + 1);
 scanf("%d", &matrix2[i][j]);
 }
 }
 addMatrices(matrix1, matrix2, result, rows, cols);
 displayMatrix(result, rows, cols);
 return 0;
}

