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
struct Node* mergeLists(struct Node* head1, struct Node* head2) {
 struct Node* mergedList = NULL;
 if (head1 == NULL)
 return head2;
 else if (head2 == NULL)
 return head1;
 if (head1->data <= head2->data) {
 mergedList = head1;
 mergedList->next = mergeLists(head1->next, head2);
 } else {
 mergedList = head2;
 mergedList->next = mergeLists(head1, head2->next);
 }
 return mergedList;
}
void displayList(struct Node* node) {
 while (node != NULL) {
 printf("%d ", node->data);
 node = node->next;
 }
 printf("\n");
}
void freeList(struct Node* node) {
 struct Node* temp;
 while (node != NULL) {
 temp = node;
 node = node->next;
 free(temp);
 }
}
int main() {
 struct Node* list1 = NULL;
 struct Node* list2 = NULL;
 append(&list1, 2);
 append(&list1, 5);
 append(&list1, 7);
 append(&list2, 3);
 append(&list2, 6);
 append(&list2, 8);
 printf("First sorted linked list: ");
 displayList(list1);
 printf("Second sorted linked list: ");
 displayList(list2);
 struct Node* mergedList = mergeLists(list1, list2);
 printf("Merged sorted linked list: ");
 displayList(mergedList);
 freeList(mergedList);
 return 0;
}
