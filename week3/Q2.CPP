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

#include<stack>
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        stack<int>x;
        ListNode*temp=head;
        while(temp!=nullptr){
            x.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=nullptr){
             temp->val=x.top();
             x.pop(); 
             temp=temp->next;
        }
        return head;
    }
};