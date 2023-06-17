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

Node *deleteFirst(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    head = head->next;
    return head;
}

Node *deleteLast(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = NULL;
    delete temp;
    return head;
}

void printNodes(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    first->next = second;
    second->next = third;
    printNodes(first);
    cout << endl;
    Node *head = deleteFirst(first);
    printNodes(head);
    cout << endl;
    Node *head2 = deleteLast(head);
    printNodes(head2);
    return 0;
}