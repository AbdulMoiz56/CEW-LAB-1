
#define MAX_SIZE 100
int main() {
 int array[MAX_SIZE];
 int size, i;
 printf("Enter the size of the array (max %d): ", MAX_SIZE);
 scanf("%d", &size);
 if (size <= 0 || size > MAX_SIZE) {
 printf("Invalid size entered. Please enter a size between 1 and %d\n", MAX_SIZE);
 return 1;
 }
 printf("Enter the elements of the array:\n");
 for (i = 0; i < size; i++) {
 printf("Enter element %d: ", i + 1);
 scanf("%d", &array[i]);
 }
 printf("The array elements are: ");
 int *ptr = array;
 for (i = 0; i < size; i++) {
 printf("%d ", *ptr);
 ptr++;
 }
 printf("\n");
 return 0;
}

