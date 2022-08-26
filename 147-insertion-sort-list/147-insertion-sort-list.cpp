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
        void insert(ListNode* &news , ListNode* tem){
        ListNode* temp = news ;
                while(temp->next != NULL && temp->next->val < tem->val ){
                    temp = temp->next ;
                }
          tem -> next = temp->next ;
                temp->next = tem ;
        } 
    ListNode* insertionSortList(ListNode* head) {
        ListNode* temp = NULL ;
        ListNode* curr = head ;
             ListNode* newNode = new ListNode(-1) ;
           while(curr != NULL){
             temp = curr ;
             curr =curr->next ;
             temp->next = NULL ; //by this we disconnect the tempNode
             insert(newNode , temp) ; // this insert each Node in Sorted.
           }
        return  newNode->next ;
    }
};









