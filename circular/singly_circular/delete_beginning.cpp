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

Node *deleteLL(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }
    head->data = head->next->data;
    Node *temp = head->next;
    head->next = head->next->next;
    delete (temp);
    return head;
}

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
    Node *newh = deleteLL(head);
    printLL(newh);
    return 0;
}