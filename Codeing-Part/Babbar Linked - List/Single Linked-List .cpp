
#include <iostream>
using namespace std;

// Notes cReation , ki Node me kya kya hoga 
class Node 
{
    public:
    int data ;
    Node *next;
    
    //  Constructor bna lia  , Value insert krwane ke lie 
    Node(int data) 
    {
        this->data = data;
        this->next = NULL;
    }

    // Hume destructor bnana pdega jo ko constructor dwara bnaya gya hota hai node destructor usko delete krta hai 
    ~Node()
    {
        // value me store islea kia kyuki mai bdd me bta skuu ki maine kon si value free kraya huu
        int value = this->data;
        // Memory Free Krane ka Code ,
        //  agr jisko delete kr rhe hai agr wo kisi or ko bhi point kr rha hai to waha se bhi usko disconnect krna pdega 
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is Free : "<<value<<endl;

    }

};


// Insert At  Head Function
// Here we take reference kyuki mai nhi chahta ki copy bne usme operation ho , balki maimchahta hu ki meri original 
// Linked list me change ho jae 

void InsertAtHead(Node* &head , int data)
{
    Node *temp = new Node(data);   // ek node bnaega 
    temp->next = head;
    head = temp;
 
}

// Assume fo Single Element 
void InsertAtTail(Node* &tail , int data)
{
    // Create New Node 
    Node *temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}

// Insert at Middle / or any Particular POSITION 

void InsertAtPosition(Node* &tail,Node* &head,int position,int data)
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
    
    // last ki position dia ho , to Linkedlist me last tk traverse krte chalenge or last me jaakr dubara 
    // InsertatTail function call kr dunga 
    if(temp ->next == NULL)
    {
        InsertAtTail(tail,data); 
        return;
    }
    


    Node* newnodetoinsert = new Node(data);
    newnodetoinsert->next = temp->next;
    temp->next = newnodetoinsert;

}

// Delete the node via Position 
void DeleteNode(int position, Node* &head)
{
    // Deleting First And Start Node 
    if(position==1)
    {
        Node* temp = head;
        head = head->next;
        // Memory Free kraa dia us node ki jo delete kr rhe hai 
        // kyuki iske Node Dynamically bne hai is wjh se isko memory free krana pdega 
        
        // free krne ka mtlb jisko hum free kr rhe hai wo kisi ko bhi point na kre 
        temp->next =NULL;
        delete temp;
    }
    // Delete at any position
    else
    {
        Node* curr = head;
        Node* Prev = NULL;
        int count = 1;
        while(count<position-1)
        {
            Prev = curr;
            curr = curr->next;
            count++;

        }
        Prev->next = curr->next;
        // free krne ka mtlb jisko hum free kr rhe hai wo kisi ko bhi point na kre 
        curr->next = NULL;
        delete curr;


    }

}
// How to Traverse in Linked List 
// send head reference to traverse from head upto final Linked List
void PrintLinkedList(Node* &head)
{
    Node *temp = head;
    // Hum temp me aage waale node ka Address hi daal rhe hai 
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


int main()
{
    // here dynamicallly create a new Node using new Keyword
    Node *node1  = new Node(10);  
    // isme value dene pr constructor me jaakr data dega or NULL value daalega address me 
    
    // Node *node2  = new Node(6); 
    // Jbtk hum node me data nhi daalte tb tk usme data = 0 hota hai By Default 
   
   /*
   
    cout <<" First Node "<<node1->data<<endl; 
    cout <<" First Node "<<node1->next<<endl; 
    
    cout <<" Second Node "<<node2->data<<endl; 
    cout <<" Second Node "<<node2->next<<endl; 
    
    */
    
    Node *head = node1;
    Node *tail = node1;
    PrintLinkedList(head);
    
    // Insert At Head
    // InsertAtHead(head,12);
    // PrintLinkedList(head);
    
    // InsertAtHead(head,17);
    // PrintLinkedList(head);
    
    // Inset At Tail
    InsertAtTail(tail,12);
    PrintLinkedList(head);

    InsertAtTail(tail,15);
    PrintLinkedList(head);
    
    // Insert At Any Position
    InsertAtPosition(tail,head,4,22);
    PrintLinkedList(head);

    // InsertAtPosition(tail,head,1,5);
    // PrintLinkedList(head);

    // InsertAtPosition(tail,head,7,100);
    // PrintLinkedList(head);

    cout<<"Head : "<<head->data<<endl;
    cout<<"Tail : "<<tail->data<<endl;

    DeleteNode(1,head);
    PrintLinkedList(head);

    DeleteNode(2,head);
    PrintLinkedList(head);


    

    return 0;
}
