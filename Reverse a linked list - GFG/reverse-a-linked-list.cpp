//{ Driver Code Starts
//Initial Template for C++// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};



// } Driver Code Ends
/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
        struct Node* iterative(struct Node* head){
        if(head==NULL || head->next == NULL)  return head ;
        Node* prev = NULL ;
        Node* succ = head;
        while(succ){
            succ = head -> next ;
            head->next = prev ;
            prev = head ;
            head = succ ;
        }
        return prev ;
    }
        struct Node* recursive(struct Node* head) {
        // if (head == NULL|| head->next == NULL) return head ;
        // ListNode* prev = NULL ;
        // ListNode* h2 = reverseList(head->next) ;
        return head ;
    }
    struct Node* reverseList(struct Node *head)
    {
        
        // code here
    Node* ans = iterative(head) ;
    return ans ;
        // return head of reversed list
    }
    
};
    


//{ Driver Code Starts.

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
       printf("%d ", temp->data);
       temp  = temp->next;
    }
}

/* Driver program to test above function*/
int main()
{
    int T,n,l,firstdata;
    cin>>T;

    while(T--)
    {
        struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        
        for (int i=1; i<n; i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
        
        Solution ob;
        head = ob. reverseList(head);
        
        printList(head);
        cout << endl;
    }
    return 0;
}


// } Driver Code Ends