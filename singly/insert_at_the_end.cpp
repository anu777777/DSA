#include <bits/stdc++.h>
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

void InsertAtEnd(Node **head, int element)
{
    Node *newNode = new Node(element);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    Node *curr = *head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newNode;
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
    Node *head = NULL;
    InsertAtEnd(&head, 20);
    InsertAtEnd(&head, 30);
    InsertAtEnd(&head, 40);
    printNodes(head);
    return 0;
}