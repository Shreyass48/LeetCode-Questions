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
//     ListNode* reverse(ListNode* head)
//     {
//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         ListNode* nextt = NULL;
        
//         while(curr != NULL)
//         {
//             nextt = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = nextt;
//         }
        
//         return prev;
//     }
    void InsertAtEnd(ListNode* &head, ListNode* &tail, int data)
    {
        ListNode* temp = new ListNode(data);
        if(head == NULL)
        {
            head = temp;
            tail = temp;
            return;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
    }
    
    ListNode* Add(ListNode* first, ListNode* second)
    {
        ListNode* ansHead = NULL;
        ListNode* ansTail = NULL;
        int carry = 0;
        
        while(first != NULL || second != NULL || carry != 0)
        {
            int val1 = 0;
            if(first != NULL)
                val1 = first->val;
                
            int val2 = 0;
            if(second != NULL)
                val2 = second->val;
                
            int sum = carry + val1 + val2;
            int digit = sum % 10;
            
            InsertAtEnd(ansHead,ansTail,digit);
            
            carry = sum / 10;
            
            if(first != NULL)
                first = first->next;
            if(second != NULL)
                second = second->next;
                
        }
        
        return ansHead;
    }
    ListNode* addTwoNumbers(ListNode* first, ListNode* second) 
    {
        //  // Step1 : Reverse given LL
        // first = reverse(first);
        // second = reverse(second);
        
        // Step2 : add 2 LL
        ListNode* ans = Add(first,second);
        
        // step3 : reverse ans
        //ans = reverse(ans);
        
        return ans;
        
    }
};