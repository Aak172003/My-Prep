#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Default Constructor 
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    
    // Parameterised Constructor 
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// For Printing the data 
void print(Node* head)
{
    // initially temp first node ke address ko pint krega 
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<"the data is "<<temp->data<<endl;
        temp = temp->next;

    }
}

int main()
{
    Node* node1 = new Node(20);
    Node* node2 = new Node(30);
    Node* node3 = new Node(40);
    Node* node4 = new Node(50);
    Node* node5 = new Node(60);

    // Way to connect all linked List
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    
    // Taking head pointer bcoz ,
    //  printing ke lie first node ka address chaiye hota hai 
    Node* head = node1;
    // Call Print function
    print(head);
    
    return 0;
}
