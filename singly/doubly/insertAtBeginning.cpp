#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int x)
    {
        data = x;
        next = NULL;
        prev = NULL;
    }
};

Node *inserAtBeginning(Node *head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    if (head != NULL)
    {
        head->prev = newNode;
    }
    return newNode;
}

void printNode(Node *head)
{
    if (head == NULL)
    {
        cout << "NULL";
    }
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL";
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *h1 = inserAtBeginning(head, 10);
    printNode(h1);
    Node *h2 = inserAtBeginning(h1, 20);
    printNode(h2);
    return 0;
}