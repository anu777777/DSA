#include <iostream>
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

// linear
int searching(Node *head, int value)
{
    Node *curr = head;
    int pos = 1;
    while (curr != NULL)
    {
        if (curr->data == value)
        {
            return pos;
        }
        pos++;
        curr = curr->next;
    }
    cout << "No items found" << endl;
    return 0;
}

// recursive
int RSearch(Node *head, int value)
{
    if (head == NULL)
    {
        return -1;
    }
    if (head->data == value)
    {
        return 1;
    }
    else
    {
        int res = RSearch(head->next, value);
        if (head == NULL)
        {
            return -1;
        }
        else
        {
            return (res + 1);
        }
    }
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    head->next = second;
    second->next = third;
    int element = searching(head, 20);
    cout << "The pos of the element is: " << element << endl;
    int ele = searching(head, 50);
    if (ele)
        cout << "The pos of the element is : " << ele << endl;
    int element2 = RSearch(head, 30);
    cout << "The pos of the element is: " << element2 << endl;
    return 0;
}