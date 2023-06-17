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

void printLastNth(Node *head, int n)
{
    Node *fast = head;
    for (int i = 0; i < n; i++)
    {
        if (fast == NULL)
        {
            return;
        }
        fast = fast->next;
    }
    Node *slow = head;
    while (fast != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    cout << slow->data;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(70);
    Node *fifth = new Node(50);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    print(head);
    cout << endl;
    cout << "Priting the nth last node!" << endl;
    printLastNth(head, 2);
    return 0;
}