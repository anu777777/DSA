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

void printLL(Node *head)
{
    if (head == NULL)
    {
        cout << "NULL";
        return;
    }
    Node *temp = head;
    do
    {
        cout << temp->data << "->";
        temp = temp->next;
    } while (temp != head);
    cout << "NULL";
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(30);
    Node *third = new Node(70);
    head->next = second;
    second->next = third;
    third->next = head;
    printLL(head);
    return 0;
}