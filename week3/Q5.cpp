/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include<stack>
ListNode* Solution::solve(ListNode* A) {
    int count=1;
    if(A==NULL){return A;}
    else if(A->next==NULL){return A;}
    else if((A->next)->next==NULL){return A;}
    else if((((A->next)->next)->next)==NULL){return A;}
    else{
        stack<int>x;
        ListNode*temp=A;
        while(temp!=NULL){
            if(count%2==0){x.push(temp->val);}
            temp=temp->next;
            count++;
        }
        temp=A;count=1;
        while(temp!=NULL){
            if(count%2==0){temp->val=x.top();
            x.pop();
            }
        temp=temp->next;
         count++;
        }
        return A;
    }
}
