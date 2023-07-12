// Given the head of a singly linked list, return true if it is a 
// palindrome
//  or false otherwise.

// Example 1:


// Input: head = [1,2,2,1]
// Output: true
// Example 2:


// Input: head = [1,2]
// Output: false

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
   
    
    
    
    bool isPalindrome(ListNode* head) 
    {
      
      stack<int> s;
      ListNode* p = head;
      while(p != NULL)
      {
          s.push(p -> val);
          p = p -> next;
      }

      while(head != NULL)
      {
          int i = s.top();

          s.pop();

          if(head -> val != i)
          return false;

          head = head -> next;
      }

     

      return true;

    }

    
};