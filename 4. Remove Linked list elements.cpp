/* Remove Linked List Elements

Remove all elements from a linked list of integers that have value val.
Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5
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
    ListNode* removeElements(ListNode* head, int val) {
        // getting rid of potential initial matches
        while (head && head->val == val) 
            head = head->next;
        if (!head) 
            return head;
        // getting rid of other matches
        ListNode *tmp = head;
        while (tmp->next) {
            if (tmp->next->val == val) tmp->next = tmp->next->next;
            else tmp = tmp->next;
        }
        return head;
        
        
    }
};