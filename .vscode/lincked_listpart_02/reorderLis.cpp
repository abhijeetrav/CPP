#include<iostream>
using namespace std;
 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode
    ) : val(x), next(next) {}
 };
 

class Solution {
public:
        ListNode* reverseList(ListNode* head){
        if(head = NULL || head->next==NULL) return head;
        head->next->next = head;
        return newHead;
        
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next;
        } 
        //slow ia at the left middle/middle
        ListNode* b = reverseList(slow->next);
        ListNode* a= head;
        slow->next = NULL;
        //merge thwese two a and b altenatively

        ListNode* c = new ListNode(100);
        ListNode* tempC = c;
        ListNode* tempA = a;
        ListNode* tempB = b;
        while(tempA && tempB){
            tempC->next =tempA;
            tempA=tempA->next;
            tempC->next = tempB;
            tempC=tempC->next;
            tempB = tempB->next;


       }
    }
};
