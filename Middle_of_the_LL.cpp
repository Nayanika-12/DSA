// Given the head of a singly linked list, return the middle node of the linked list.

// If there are two middle nodes, return the second middle node.

 

// Example 1:


// Input: head = [1,2,3,4,5]
// Output: [3,4,5]
// Explanation: The middle node of the list is node 3.

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
    ListNode* middleNode(ListNode* head) {
        
       int mid,k=0,data;
       ListNode* p = head;
        int length = count(head);
           mid = (length/2);


       while(p!=NULL)
       {
           if(k == mid){
           
           return p;
           }

           k++;
           p = p -> next;
           
           
       }

     return head; 
     
     }

    int count(ListNode* head)
    {
        int l = 0;
        ListNode* p = head;
        while(p != NULL)
        {
            p = p -> next;
            l++;
        }
    
     return l;
    }

};