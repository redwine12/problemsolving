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
// class Solution {
// public:
//     void solve(ListNode* list1, ListNode* list2, ListNode* &newList){
//         if(!list1 && !list2) return;

//         newList->val = min(list1->val, list2->val);
//         newList->next->val = max(list1->val, list2->val);
//         solve(list1->next, list2->next, newList);
//     }

//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         ListNode* newList = NULL;
//         solve(list1, list2, newList);
//         return newList;
//     }
// };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2; if(!list2) return list1;

        ListNode* newList;

        if (list1->val < list2->val) {
            newList = list1;
            newList->next = mergeTwoLists(list1->next, list2);
        } else {
            newList = list2;
            newList->next = mergeTwoLists(list1, list2->next);
        }

        return newList;
    }
};
