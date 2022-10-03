#include<iostream>
using namespace std;
class node {
public:
node* next;
node* prev;
int data;
};
void insert_front(node** head)
{
cout << "\nEnter Data to insert at front :\n";
node* new_node = new node;
cin >> new_node->data;
if (*head == NULL) {
new_node->next = new_node;
new_node->prev = new_node;
*head = new_node;
}
else {
new_node->next = *head;
new_node->prev = (*head)->prev;
((*head)->prev)->next = new_node;
(*head)->prev = new_node;
*head = new_node;
}
cout << "Data inserted at front\n";
}
void insert_end(node** head)
{ cout << "\nEnter Data to insert at end :\n";
node* new_node = new node;
cin >> new_node->data;
if (*head == NULL) {
new_node->next = new_node;
}
else {
}
new_node->prev = new_node;
*head = new_node;
node* curr = *head;
while (curr->next != *head)
curr = curr->next;
new_node->next = curr->next;
new_node->prev = curr;
(curr->next)->prev = new_node;
curr->next = new_node;
cout << "Data inserted at last\n";
}
void delete_front(node** head)
{
if (*head == NULL) {
cout << "\nList in empty!!\n";
}
else if ((*head)->next == *head) {
delete *head;
*head = NULL;
} else {
node* curr = new node;
curr = (*head)->next;
curr->prev = (*head)->prev;
((*head)->prev)->next = curr;
delete *head;
*head = curr;
}
cout << "\nData Deleted from front\n";
}
void delete_end(node** head)
{
if (*head == NULL) {
cout << "\nList is Empty!!\n";
}
else if ((*head)->next == *head) {
delete *head; *head = NULL;
}
else {
node* curr = new node;
curr = *head;
while (curr->next != (*head)) {
curr = curr->next;
}
(curr->prev)->next = curr->next;
(curr->next)->prev = curr->prev;
delete curr;
}
cout << "\nData Deleted from last\n";
}
void display(node* head)
{
node* curr = head; if (curr == NULL) cout << "\n List is Empty!!"; else {
do {
cout << curr->data << "->";
curr = curr->next;
} while (curr != head);
}
}
int main()
{
int choice;
char menu = 'y';
node* head = NULL;
insert_front(&head);
display(head);
insert_front(&head);
display(head);
insert_end(&head);
display(head);
insert_end(&head);
display(head);
delete_front(&head);
display(head);
delete_end(&head);
display(head);
return 0;
}
