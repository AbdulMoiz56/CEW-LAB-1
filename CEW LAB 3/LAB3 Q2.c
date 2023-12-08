

void printReverse(const char *str) {
    int length = strlen(str);
    const char *ptr = str + length - 1;
    printf("Reversed string: ");
    while (ptr >= str) {
    printf("%c", *ptr);
    ptr--;
 }
 printf("\n");
}
int main() {
    char inputString[100];
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    printReverse(inputString);
    return 0;
}

