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

Node *deleteLL(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    delete (temp);
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
    printNode(head);
    Node *h = deleteLL(head);
    printNode(h);
    return 0;
}