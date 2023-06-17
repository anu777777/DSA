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

Node *deleteKnodes(Node *head, int k)
{
    // assuming that K is not 1
    Node *curr = head;
    for (int i = 0; i < k - 2; i++)
    {
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
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
    Node *fourth = new Node(80);
    Node *fifth = new Node(40);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = head;
    printLL(head);
    Node *h = deleteKnodes(head, 3);
    cout << endl;
    printLL(h);
    return 0;
}