/*
Leetcode Link - https://leetcode.com/problems/middle-of-the-linked-list/description/
*/


class Solution {
public:
    ListNode* middleNode(ListNode* head) 
    {
	ListNode *slow = head, *fast = head;
	while (head && head->next) 
    {
	    slow = slow->next;
	    head = head->next->next;
	}
	return slow;

    }
};

// Another Methdo TC - o(N)

// Length count krke dega 
// int getlength(Node* head)
// {
//     int len=0;
//     while(head!=NULL)
//     {
//         len++;
//         head = head->next;
//     }
//     return len;
// }

// Node *findMiddle(Node *head) 
// {

//     int len = getlength(head);
//     int ans = (len/2);
       
       // Hum ans tk traverse krenge or phr ans se jush piche pauchte hii hum temp ko return krdeneg 

//     Node* temp = head;
//     int count = 0;

//     while(count<ans)
//     {
//         temp = temp->next;
//         count++;
//     }
// Jaha Fail ho jae ye loop wohi apna answer hai 
//     return temp;
// }