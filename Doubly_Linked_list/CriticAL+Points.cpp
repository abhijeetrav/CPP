// 5->3->1->2->4->NULL like that
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution{
    public:
    vector<int> nodeBetweenCritacalPoints(ListNode* head){
        int idx = 1;
        int fidx = -1;
        int sidx = -1;
        ListNode* a = head;
        ListNode* b =head->next;
        ListNode* c = head->next->next;
        if(c==NULL) return {-1,-1};
        int mind = INT_MAX;
        f = -1;
        s = -1;
        idx = -1;

        while(c){
            if(b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val){
                if(fidx==-1)  fidx=idx;
                else sidx = idx;
            }
            a= a->next;
            b=b->next;
            c=c->next;
            idx++;
        }
        if(sidx==-1) return {-1,-1};
        int maxd = sidx-fidx;
        fidx = -1;
        sidx = -1;
        idx = -1;
        a = head;
        b = head->next;
        c = head->next->next;
        while(c){
            if(b->val > a->val && b->val > c->val || b->val < a->val && b->val < c->val){
                fidx=idx;
                sidx = idx;
                if(fidx! = -1){
                    int d = sidx-fidx;
                    mind = min(mind, d);
                }
            
            }
            a= a->next;
            b=b->next;
            c=c->next;
            idx++;
        }     
        return {mind,maxd};   
    }
};
