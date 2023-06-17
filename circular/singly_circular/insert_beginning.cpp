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

Node *insertBeginning(Node *head, int data)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    Node *temp = head;
    do
    {
        temp = temp->next;
    } while (temp->next != head);
    temp->next = newNode;
    return newNode;
}

Node *insertTricky(Node *head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    newNode->next = head->next;
    int temp = head->data;
    head->data = newNode->data;
    newNode->data = temp;
    head->next = newNode;
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
    Node *newh = insertTricky(head, 60);
    printLL(newh);
    return 0;
}