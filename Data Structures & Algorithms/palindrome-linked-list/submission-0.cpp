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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast->next && fast->next->next){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        ListNode* prev = nullptr;
        ListNode* sec = slow -> next;
        slow -> next = nullptr;
        while(sec){
            ListNode* extra = sec -> next;
            sec -> next = prev;
            prev = sec;
            sec = extra;
        }

        while(head && prev){
            if(head -> val != prev -> val)return false;
            head = head -> next;
            prev = prev -> next;
        }
        return true;
    }
};