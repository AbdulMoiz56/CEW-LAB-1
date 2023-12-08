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

 while (last->next != NULL)
 last = last->next;
 last->next = new_node;
}
void removeOddIndices(struct Node** head_ref) {
 struct Node* temp = *head_ref;
 struct Node* prev = NULL;
 int index = 0;
 while (temp != NULL) {
 if (index % 2 != 0) {
 if (prev == NULL) {
 *head_ref = temp->next;
 free(temp);
 temp = *head_ref;
 } else {
 prev->next = temp->next;
 free(temp);
 temp = prev->next;
 }
 } else {
 prev = temp;
 temp = temp->next;
 }
 index++;
 }
}
void displayList(struct Node* node) {
 while (node != NULL) {
 printf("%d ", node->data);
 node = node->next;
 }
 printf("\n");
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
 append(&head, 1);
 append(&head, 2);
 append(&head, 3);
 append(&head, 4);
 append(&head, 5);
 append(&head, 6);
 printf("Original linked list: ");
 displayList(head);
 removeOddIndices(&head);
 printf("Linked list after removing elements with odd indices: ");
 displayList(head);
 freeLinkedList(head);
 return 0;
}

