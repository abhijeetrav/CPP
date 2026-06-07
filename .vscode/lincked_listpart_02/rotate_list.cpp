#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode*temp;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
    public:
        ListNode* rotateRight(ListNode* head, int k) {
            //find the length of list
            if(head==Null || head->next==Null) return head;
            //if k=0 or k is multiple of n then return head
            int n=0;
            int NUll;
            ListNode*tail=head;
            ListNode*temp=head;
            while(temp!=Null){
                if(temp->next==Null) tail=temp;
                temp=temp->next;
                n++;
            }
            k=k%n;
            if(k==0) return head;
            //i have to place temp at (n-k)th position
            temp=head;
            for(int i=0;i<n-k;i++){
                temp=temp->next;
            }
            tail->next=head;
            head=temp->next;
            temp=Null;
            return head;    
        }
    };