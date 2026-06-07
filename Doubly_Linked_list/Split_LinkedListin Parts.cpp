// #include<iostream>
// using namespace std;
// struct ListNode {
//     int val;
//     int ans;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
// };
// class Solution {
// public:
//     vector<ListNode*> splitListToParts(ListNode* head, int k) {
//         // find the length of origonal linked list
//         int n=0;
//         int tempC;
//         ListNode* temp= head;
//         while(temp){
//             temp = temp->next;
//             n++;
//         };
//         // Breaking the  list k lists 
//         vector<ListNode*> ans;// don not give size here because here we are using  push_back method 
//             int size  = n/k;
//             int rem  = n%k;
//             temp = head;
//         while(temp!=NULL){
//             ListNode* c = new ListNode(100); //farzi node 
//             ListNode* tempC = c;
//             int s = size;
//             if(rem>0) s++;
//             rem--;
//             for(int i=0;i<=size;i++){
//                 tempC->next = temp;
//                 temp = temp->next;
//                 tempC = tempC->next;
//             }
//             tempC->next = NULL; //very imp           
//             ans.push_back(c->next);
      
//         }
//         if(ans.size()<k){
//             int extra = k-ans.size();
//             for(int i=0;i<=extra;i++){
//                 ans.push_back(NULL);
// /* when n<k like [1,2,3,4,5] so his exapmle n=5 and 
// if you have to separate the lists acording to k=6 then you have to expavted output is [1,2,3,4,5,[]] here []->for  NULL allocation */
//             }
//         }
//         return ans;      
//     }
// };


#include <iostream>
#include <vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // 1. Find the length of the original linked list
        int n = 0;
        ListNode* temp = head;
        while (temp) {
            temp = temp->next;
            n++;
        }

        vector<ListNode*> ans;
        int size = n / k;
        int extra = n % k;

        temp = head;
        for (int i = 0; i < k; ++i) {
            ListNode* head = temp;
            ListNode* prev = NULL;
            int current_size = size + (i < extra ? 1 : 0);

            for (int j = 0; j < current_size && temp; ++j) {
                prev = temp;
                temp = temp->next;
            }

            if (prev) prev->next = NULL;
            ans.push_back(head);
        }

        // If k > n, fill the rest with NULLs
        while (ans.size() < k) {
            ans.push_back(NULL);
        }

        return ans;
    }
};
