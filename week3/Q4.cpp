//Time complexity O(m+n) Space complexity O(m)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
   if((A==nullptr||B==nullptr)){return nullptr;}
        unordered_set<ListNode*>st;
        ListNode*tempA=A; ListNode*tempB=B;
        while(tempA!=nullptr){st.insert(tempA);tempA=tempA->next;}
        while(tempB!=nullptr){
            if(st.find(tempB)!=st.end()){return tempB;}
            tempB=tempB->next;
        }
        return tempB;
    }
    //Time complexity O(m+n) Space complexity O(1)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/*class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) return nullptr;

        ListNode* pA = headA;
        ListNode* pB = headB;

        while (pA != pB) {
            if (pA == nullptr) {
                pA = headB;
            } else {
                pA = pA->next;
            }

            if (pB == nullptr) {
                pB = headA;
            } else {
                pB = pB->next;
            }
        }

        return pA;  // Could be intersection node or nullptr
    }
};
*/


