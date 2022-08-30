/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* findMid(ListNode* head)
    {
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow;
    }
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* nextt = NULL;
        
        while(curr != NULL)
        {
            nextt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextt;
            
        }
        
        return prev;
    }
    bool isPalindrome(ListNode* head) 
    {
        // Step 1 : find mid
        ListNode* middle = findMid(head);
        
        // Step 2 : reverse string after mid
        ListNode* temp = middle->next;
        middle->next = reverse(temp);
        
        //step 3 : compare 2 halves
        ListNode* head1 = head;
        ListNode* head2 = middle->next;
        
        while(head2 != NULL)
        {
            if(head1->val != head2->val)
                return false;
            
            head1 = head1->next;
            head2 = head2->next;
        }
        
        // Step 4 : making original list (repeat step 2)
        temp = middle->next;
        middle->next = reverse(temp);
        
        return true;
        
    }
};