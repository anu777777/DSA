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

void print(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
}

Node *recursiveR(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    Node *rec_head = recursiveR(head->next);
    Node *tail = head->next;
    tail->next = head;
    head->next = NULL;
    return rec_head;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->next = third;
    print(head);
    cout << endl;
    Node *newh = recursiveR(head);
    print(newh);
    return 0;
}