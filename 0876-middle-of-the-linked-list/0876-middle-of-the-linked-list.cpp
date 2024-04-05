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
    ListNode* middleNode(ListNode* head) {
        int steps = 0;
        ListNode *halfNode = head, *currentNode = head;
         while (currentNode != NULL && currentNode->next!=NULL) {
            halfNode = halfNode->next;
            currentNode=currentNode->next->next;
        }
        return halfNode;
    }
};