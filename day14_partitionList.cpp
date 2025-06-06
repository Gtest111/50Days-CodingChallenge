
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lessthen = new ListNode(0);
        ListNode* ltemp = lessthen;
        ListNode* morethen = new ListNode(0);
        ListNode* mtemp = morethen;
        ListNode* temp = head;
        while(temp){
            if(temp->val <x){
                ltemp->next = temp;
                ltemp = temp;
            }else{
                mtemp->next = temp;
                mtemp = temp;
            }
            temp = temp->next;
        }
        mtemp->next = nullptr;
        ltemp->next = morethen->next;
        delete morethen;
        head = lessthen->next;
        delete lessthen;
        return head;
        
    }
};