// Iterative Methdo 



class Solution 
{
public:
    ListNode* reverseList(ListNode* head) 
    {

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;

        while(curr!=NULL)
        {
            // node ko break krne se phle hum forwrd me store krna pdega jisse hamara link lost na hojaeb
            forward = curr->next;
            curr->next  =prev;

            prev = curr;
            curr = forward;
        }
        return prev;
    }
};



// 1st - Reccursive solution

Node *reverse(Node* head)
{
    // means head hai nhi , or agr hai to single element hai Linked list me
    if(head==NULL || head->next == NULL)
    {
        return head;
    }
    // 1st node ko chod krr baaki aage ka saara called choti LL
    // return chotahead 
    Node* chotahead = reverse(head->next);
    
    // 2nd node se connection kaat kr hum head wale pr le gye 
    // Generally head to hamara first elemet ko krega 
    head->next->next=head;
    head->next = NULL;

    // chotahead return kyuki chota head hi piche wale elemt ka head lia hua hai
    return chotahead
}





// 2nd - Reccursive solution , same using above 1st Iterative approach

void reverse(Node* &head,Node* curr,Node* prev)
{
    // if current hamara Null tk pauch gya hai 
    if(cur==NULL)
    {
        // return previous
        head = prev;
        return head;
    }
    // Fordward hamara curr->next element pr hoga 
    Node *forward = curr->next;
    reverse(head,forward,curr)  
    //curr aage forward kp point krne lg jata hai 
    // prev curr ko point krne lg jaata hai
    curr->next = prev;
}

Node* reverseLinkedList(Node *head)
{
    // Initialise Two poiner curr, head 
    Node* curr = head;
    Node *prev = Null;
    // Call reverse Function
    reverse(head,curr,prev)
    return head;
}