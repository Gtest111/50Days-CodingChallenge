
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
        ListNode* rotateRight(ListNode* head, int k) {
            ListNode* trueHead = head;
            ListNode* curr = head;
            ListNode* forward = head;
            if(head == nullptr || k == 0 || head->next == nullptr){
                return head;
            }
            int cnt = 1;
            while(trueHead -> next != nullptr){
                cnt++;
                trueHead = trueHead -> next;
            }
            // trueHead -> next = head; // circula
            int itr = (k%cnt);
            while(itr--){
                forward = forward -> next;
            }
            while(forward -> next != nullptr){
                curr = curr -> next;
                forward = forward -> next;
            }
            forward -> next = head;
            ListNode* newHead = curr -> next;
            curr -> next = nullptr;
            return newHead;
        
        }
    };