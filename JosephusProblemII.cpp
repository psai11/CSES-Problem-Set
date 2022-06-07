#include <bits/stdc++.h>
 
using namespace std;
 
class Node {
    public:
        int data;
        Node* next;
        Node* prev;
};

void printList(Node* n)
{
    while (n->next != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}
 
int main()
{
    int n, x;
    cin>>n>>x;
    Node* start = NULL;
    start = new Node();
    start->data = 1;
    start->next = NULL;
    start->prev = NULL;
    Node* tempNode = NULL;
    Node* ptr = NULL;
    ptr = new Node();
    ptr = start;
    for(int i=1; i<n; i++) {
        tempNode = new Node();
        tempNode->data = i+1;
        tempNode->next = NULL;
        tempNode->prev = ptr;
        ptr->next = tempNode;
        ptr = tempNode;
    }
    ptr->next = start;
    start->prev = ptr;
    // printList(start);

    ptr = start;
    int i;
    while(ptr->data!=ptr->next->data) {
        i = 0;
        while(i<x%n) {
            ptr = ptr->next;
            i++;
        }
        cout<<ptr->data<<" ";
        ptr->prev->next = ptr->next;
        ptr->next->prev = ptr->prev;
        ptr = ptr->next;
        n--;
    }
    cout<<ptr->data;
    return 0;
}