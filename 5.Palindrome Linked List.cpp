/* Palindrome Linked List

Given a singly linked list, determine if it is a palindrome.
Input: 1->2
Output: false
Input: 1->2->2->1
Output: true

*/

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
        stack<ListNode*> nodeStack;
        ListNode *phead = head;
        while(phead)
        {
            nodeStack.push(phead);
            phead = phead->next;
        }
        while(head)
        {
            if(head->val != nodeStack.top()->val)
            {
                return false;
            }
            nodeStack.pop();
            head = head->next;
        }
        return true;
        
    }
};