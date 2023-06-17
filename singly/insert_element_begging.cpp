#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
}
// inserting at the beginning
Node *InsertElement(Node *head)
{
    Node *newNode = new Node(40);
    newNode->next = head;
    head = newNode;
    return head;
}

// inserting at the end
Node *InsertAtEnd(Node *head)
{
    Node *newNode = new Node(50);
    Node *curr = head;
    while (curr != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode;
    return head;
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    first->next = second;
    second->next = third;
    printList(first);
    InsertElement(first);
    cout << endl;
    printList(first);
    cout << endl;
    Node *head = InsertElement(first);
    printList(head);
    cout << endl;
    Node *head2 = InsertAtEnd(first);
    printList(head2);
    return 0;
}