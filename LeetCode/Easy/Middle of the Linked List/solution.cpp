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
        ListNode* start = head;
        int count = 0;
        while(start != nullptr)
        {
            count++;
            start = start -> next;
        }
        start = head;

        for(int i = 0; i < count/2; i++)
        {
            start = start->next;
        }
        return start;
        // head = (count/2) -> next;
        // return head;
    }
};