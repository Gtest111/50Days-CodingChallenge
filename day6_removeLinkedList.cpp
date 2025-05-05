
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* removeElements(ListNode* head, int val) {
            if(head == nullptr){
                return head;
            }
            ListNode* curr = head;
            ListNode* forward = curr -> next;
            ListNode* newHead = head;
    
            while(forward != nullptr){
                if(forward->val == val){
                    curr->next = forward -> next;
                    forward = forward -> next;
                    continue;
                }
                if(forward != nullptr)
                    forward = forward -> next;
                curr = curr -> next;
            }
            if(newHead -> val == val){
                newHead = head -> next;
            }
            return newHead;
        }
    };