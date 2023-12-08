#define MAX_SIZE 100
int searchElement(int *ptr, int size, int key) {
 int index = -1;
 for (int i = 0; i < size; i++) {
 if (*ptr == key) {
 index = i;
 break;
 }
 ptr++;
 }
 return index;
}
int main() {
 int array[MAX_SIZE];
 int size, key;
 printf("Enter the size of the array (max %d): ", MAX_SIZE);
 scanf("%d", &size);
 if (size <= 0 || size > MAX_SIZE) {
 printf("Invalid size entered. Please enter a size between 1 and %d\n", MAX_SIZE);
 return 1;
 }
 printf("Enter the elements of the array:\n");
 for (int i = 0; i < size; i++) {
 printf("Enter element %d: ", i + 1);
 scanf("%d", &array[i]);
 }
 printf("Enter the element to search: ");
 scanf("%d", &key);
 int *ptr = array;
 int index = searchElement(ptr, size, key);
 if (index != -1) {
 printf("Element %d found at index %d\n", key, index);
 } else {
 printf("Element %d not found in the array\n", key);
 }
 return 0;
}

