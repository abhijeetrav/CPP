#include <iostream>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(NULL) {}
     ListNode(int x) : val(x), next(NULL) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL, *curr = head, *next = NULL;
        while (curr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        // Find the middle node using slow-fast pointer approach
        ListNode *slow = head;
        ListNode *fast = head;
        
        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        // Reverse the second half of the list
        ListNode *newHead = reverseList(slow->next);
        ListNode *a = head;
        ListNode *b = newHead;  
        // Compare both halves
        while (b) {
            if (a->val != b->val) return false;
            a = a->next;
            b = b->next;
        }
        return true;
    }
};
