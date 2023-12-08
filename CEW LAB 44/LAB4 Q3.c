struct Node {
 int data;
 struct Node* next;
};
void append(struct Node** head_ref, int new_data) {
 struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
 struct Node* last = *head_ref;
 new_node->data = new_data;
 new_node->next = NULL;
 if (*head_ref == NULL) {
 *head_ref = new_node;
 return;
 }
 while (last->next != NULL)
 last = last->next;
 last->next = new_node;
}
int* convertLinkedListToArray(struct Node* head, int* size) {
 struct Node* temp = head;
 int count = 0;
 while (temp != NULL) {
 count++;
 temp = temp->next;
 }
 int* arr = (int*)malloc(count * sizeof(int));
 temp = head;
 int index = 0;
 while (temp != NULL) {
 arr[index++] = temp->data;
 temp = temp->next;
 }
 *size = count;
 return arr;
}
void displayArray(int* arr, int size) {
 printf("Array representation of the linked list: [ ");
 for (int i = 0; i < size; i++) {
 printf("%d ", arr[i]);
 }
 printf("]\n");
}
void freeLinkedList(struct Node* head) {
 struct Node* temp;
 while (head != NULL) {
 temp = head;
 head = head->next;
 free(temp);
 }
}
int main() {
 struct Node* head = NULL;
 append(&head, 2);
 append(&head, 5);
 append(&head, 7);
 int size;
 int* arr = convertLinkedListToArray(head, &size);
 displayArray(arr, size);
 freeLinkedList(head);
 free(arr);
 return 0;
}
