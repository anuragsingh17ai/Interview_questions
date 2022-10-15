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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry=(l1->val+l2->val)/10;
        ListNode* l3=new ListNode((l1->val+l2->val)%10);
        ListNode* head=l3;
        l1=l1->next;
        l2=l2->next;

        
        while(l1 || l2 || carry)
        {
            int v=0;
            if(l1) v+=l1->val, l1=l1->next;
            if(l2) v+=l2->val, l2=l2->next;
            v=v+carry;
            
            ListNode *temp=new ListNode(v%10);
            l3->next=temp;
            l3=temp;
            
            carry=v/10;
        }
        
        return head;
        
        
    }
};
