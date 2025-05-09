
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
        ListNode* deleteMiddle(ListNode* head) {
            if(head->next==nullptr||head==nullptr){
                return nullptr;
            }
           
            ListNode*temp=head;
            ListNode*fast=head;
            fast=fast->next->next;
            ListNode*slow=head;
            while(fast!=nullptr&&fast->next!=nullptr){
                slow=slow->next;
                fast=fast->next->next;
            }
            temp=slow->next;
            slow->next=slow->next->next;
            delete temp;
            return head;
        }
    };