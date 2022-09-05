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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2 , int carry = 0 ) {
         cout<<carry ;
        ListNode* l3 = new ListNode() ;
        if(carry==0) {
         if(l1==NULL) { return l2; } 
         if(l2==NULL) { return l1; } 
        }
        else{
         ListNode* temp = new ListNode(0) ;
         if(l1==NULL) { return addTwoNumbers(temp, l2, carry) ; } 
         if(l2==NULL) { return addTwoNumbers(l1, temp , carry); }            
        }
            int sum  = l1->val + l2->val + carry  ;
            carry = sum/10 ; // second last digit 
            l3->val = sum%10 ;
            l3->next = addTwoNumbers(l1->next , l2->next  , carry ) ;
           return l3 ;
        } 
};








