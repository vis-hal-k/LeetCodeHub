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
       
        
    bool isPalindrome(ListNode* head) {
            // now lets reverse the linked-List
                
        ListNode* cur = head ;
        stack <int> com ; 
            while(cur){
                    com.push(cur->val) ;
                    cur=cur->next ;
            }
             cur = head ;
        // ListNode* pre  = NULL ;
        // ListNode* suc  = NULL ;
        //     while(cur){
        // suc = cur->next ;
        // cur ->next = pre ;
        // pre = cur;
        // cur = suc ;
        // com.push_back(pre->val) ;
        //     }
                while(!com.empty()){ 
                        if(cur->val != com.top() ){
                                return false ;
                        } 
                        com.pop() ;
                        cur= cur->next ;
                }
        return true ;
                
    }
};