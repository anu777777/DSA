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

Node *sortedInsert(Node *head, int e)
{
    Node *newNode = new Node(e);
    if (head == NULL)
    {
        head = newNode;
    }
    Node *curr = head;
    Node *prev = NULL;
    while (curr->data < e || curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    newNode->next = prev->next;
    prev->next = newNode;
    return head;
}

// Iterative traversal
void print(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->next = third;
    print(head);
    Node *newh = sortedInsert(head, 27);
    cout << endl;
    print(newh);
    return 0;
}