 /*
 Leetcode Link - https://leetcode.com/problems/linked-list-cycle/description/

 Ayushi YTube - https://youtu.be/J8U5KjlxVio
 */

class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        // Approach - 1 Using HashMap 
        // TC - O(1)
        // SC - O(N)

        if(head==NULL)return false;

        unordered_map<ListNode *, int>mpp;
        while(head)
        {
            if(mpp.find(head)==mpp.end())// check if the node is visite or not
            {
                mpp[head] = true; // mark as visited
            }
            else
            {
                return true;   // if node is already visited cycle exists
            }
            head = head->next;    // keep moving head
        }
        return false;       // return false if loop doesn't exists
        

        // Approach - 2  Using Two Pointer /  Floyd's Counting Algo / Tortoise __DEC_EVAL_METHOD__
        // TC - O(N)
        // SC - O(1)

        // if no element , or only single element
        if(head==NULL || head->next == NULL)
        return false;

        ListNode *slow = head;
        ListNode *fast = head;

        // if fast ka next or fast ka next ka next exist , then go to loop
        while (fast->next && fast->next->next) 
        {
            slow = slow->next;
            fast = fast->next->next;
            
            // if booth meet , means cycle is present 
            if (slow == fast) return true;
        }
        return false;
        
    }
};