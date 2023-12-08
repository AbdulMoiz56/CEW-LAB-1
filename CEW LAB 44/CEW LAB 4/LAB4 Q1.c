#include <stdio.h>
#include <stdlib.h>
#define MAX_EMAIL_LENGTH 50
#define MAX_NAME_LENGTH 50
#define MAX_PHONE_LENGTH 15
struct Contact {
 char name[MAX_NAME_LENGTH];
 char email[MAX_EMAIL_LENGTH];
 char phone[MAX_PHONE_LENGTH];
};
void addContact(struct Contact **addressBook, int *numContacts) {
 *numContacts += 1;
 *addressBook = realloc(*addressBook, (*numContacts) * sizeof(struct Contact));
 struct Contact newContact;
 printf("Enter name: ");
 scanf("%s", newContact.name);
 printf("Enter email: ");
 scanf("%s", newContact.email);
 printf("Enter phone number: ");
 scanf("%s", newContact.phone);
 (*addressBook)[(*numContacts) - 1] = newContact;
 printf("Contact added successfully!\n");
}
void deleteContact(struct Contact **addressBook, int *numContacts) {
 if (*numContacts == 0) {
 printf("Address book is empty. No contacts to delete.\n");
 return;
 }
 char nameToDelete[MAX_NAME_LENGTH];
 printf("Enter the name of the contact to delete: ");
 scanf("%s", nameToDelete);
 int found = 0;
 for (int i = 0; i < *numContacts; i++) {
 if (strcmp((*addressBook)[i].name, nameToDelete) == 0) {
 found = 1;
 for (int j = i; j < *numContacts - 1; j++) {
 (*addressBook)[j] = (*addressBook)[j + 1];
 }
 *numContacts -= 1;
 *addressBook = realloc(*addressBook, (*numContacts) * sizeof(struct Contact));
 printf("Contact deleted successfully!\n");
 break;
 }
 }
 if (!found) {
 printf("Contact not found in the address book.\n");
 }
}
// Function to print all contacts in the address book
void printContacts(struct Contact *addressBook, int numContacts) {
 if (numContacts == 0) {
 printf("Address book is empty.\n");
 return;
 }
 printf("Contacts in the address book:\n");
 for (int i = 0; i < numContacts; i++) {
 printf("Contact %d:\n", i + 1);
 printf("Name: %s\n", addressBook[i].name);
 printf("Email: %s\n", addressBook[i].email);
 printf("Phone: %s\n", addressBook[i].phone);
 printf("\n");
 }
}
void freeMemory(struct Contact **addressBook) {
 free(*addressBook);
 *addressBook = NULL;
}
int main() {
 struct Contact *addressBook = NULL;
 int numContacts = 0;
 int choice;
 do {
 printf("Address Book Menu:\n");
 printf("1. Add a contact\n");
 printf("2. Delete a contact\n");
 printf("3. Print all contacts\n");
 printf("4. Exit\n");
 printf("Enter your choice: ");
 scanf("%d", &choice);
 switch (choice) {
 case 1:
 addContact(&addressBook, &numContacts);
 break;
 case 2:
 deleteContact(&addressBook, &numContacts);
 break;
 case 3:
 printContacts(addressBook, numContacts);
 break;
 case 4:
 freeMemory(&addressBook);
 printf("Exiting the address book. Memory freed.\n");
 break;
 default:
 printf("Invalid choice. Please enter a valid option.\n");
 break;
 }
 } while (choice != 4);
 return 0;
}
