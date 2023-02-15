/* 
Hum jb bhi koi Variable declare krnge jo ki address store krega 
To hum N * us variable ke sth lgaenge 

But During Function Calling * hum Node ke sth lgaenge , aur address of operator hum usko hum variable ke sth lgaenge 
kyuki Linked list ke case me sb kaam Dynamically ho rha hai is wjh se 
hum origainal Linked list pr kaam krenge 

*/

#include<iostream>
using namespace std;

// Class ka c is small letter 
class Node 
{
    public: 
    int data;
    Node *prev;
    Node *next;  

    //  Constructor bna lia  , Value insert krwane ke lie 
    Node(int data)
    {
        this ->prev = NULL;
        this->data = data;
        this->next = NULL;
    }

};

// Print Linked list
void PrintLinkedList(Node* &head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


// Gives length o Linked list
int getLength(Node* &head)
{
    Node *temp = head;
    int count = 0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

// For taking input , Function To Insert at First Element
void InsertAtHead(Node* &head,int data)
{ 
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
 
// Jb bs ek node ho ye tb ke lie hai , 
// hum via is function koi bhi bvalue last me insert kr skte hai 
void InsertAtTail(Node* &tail,int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    temp->next=NULL;
    tail = temp;
}

void InserAtPosition(Node* &tail,Node* &head,int position,int data)
{
    // Position gives starting index 
    if(position == 1)
    {
        InsertAtHead(head,data);
        return;
    }


    Node* temp = head;
    int count = 1;
    while(count < position-1)
    {
     temp = temp->next;
     count++;
    }
    
    Node* newnodetoinsert = new Node(data);
    
    newnodetoinsert->next = temp->next;
    temp->next->prev = newnodetoinsert;
    temp->next = newnodetoinsert;
    newnodetoinsert->prev = temp;

    if(temp ->next == NULL)
    {
        InsertAtTail(tail,data); 
        return;
    }
}

// Something same logic as Singly Linked List , only varient in terms of that prev and next pointer 
// void Deletion(int position, Node* &head,)
// {

// }


int main()
{
    // ek ek krke Value dia 
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    PrintLinkedList(head);
    int count = getLength(head);
    cout<<"The total Length is :"<<count<<endl;

    // Multiple vale Daalne ke lie hume functionka use krna hai
    InsertAtHead(head,11);
    PrintLinkedList(head);

    InsertAtHead(head,13);
    PrintLinkedList(head);
    
    // Insert At Tail

    InsertAtTail(tail,14);
    PrintLinkedList(head);

    InsertAtTail(tail,15);
    PrintLinkedList(head);

    InsertAtTail(tail,100);
    PrintLinkedList(head);

    InserAtPosition(tail,head,4,500);
    PrintLinkedList(head);

    return 0;

}