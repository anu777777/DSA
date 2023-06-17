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

Node *InsertAtPos(Node *head, int data, int pos)
{
    Node *newNode = new Node(data);
    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return head;
    }
    int curr = 1;
    Node *temp = head;
    while (curr != pos - 1)
    {
        if (temp == NULL)
        {
            return NULL;
        }
        temp = temp->next;
        curr++;
    }
    if (temp->next == NULL)
    {
        temp->next = newNode;
    }
    else
    {
        newNode->next = temp->next;
        temp->next = newNode;
    }
    return head;
}

void printNodes(Node *head)
{
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
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(70);
    first->next = second;
    second->next = third;
    printNodes(first);
    Node *head = InsertAtPos(first, 30, 3);
    printNodes(head);
    return 0;
}