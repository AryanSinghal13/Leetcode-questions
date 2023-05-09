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
        ListNode* d = new ListNode(0);
        ListNode* c = d;
        
        int carry = 0;
        while(l1 || l2){

            int v1 = l1 ? l1->val : 0;
            int v2 = l2 ? l2->val : 0;
            
            //get sum(%) and carry(/)
            int sum = carry + v1 + v2;
            carry = sum / 10;

            c->next  = new ListNode(sum % 10);
            c = c->next;
   
            l1 ? l1 = l1->next : l1 = nullptr;
            l2 ? l2 = l2->next : l2 = nullptr;
        }
        carry > 0 ? c->next = new ListNode(carry) : nullptr;        
        return d->next;
    }
};