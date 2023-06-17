#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

Node *insertEnd(Node *head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    newNode->prev = curr;
    curr->next = newNode;
    return head;
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
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    Node *newh = insertEnd(head, 90);
    printNode(newh);
    return 0;
}