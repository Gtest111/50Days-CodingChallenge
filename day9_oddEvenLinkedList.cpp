
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
        ListNode* oddEvenList(ListNode* head) {
            if(head == nullptr || head -> next == nullptr) return head;
            ListNode* oddNode = new ListNode(0);
            ListNode* evenNode = new ListNode(0);
            ListNode* firstEvenNode ;
            int cnt = 1;
            bool t = true, f = true;;
            ListNode* curr = head;
            while(curr != nullptr){
                if(cnt % 2 == 0){
                    if(t){
                        firstEvenNode = curr;
                        t = false;
                    }
                    evenNode -> next = curr;
                    curr = curr -> next;
                    evenNode = evenNode -> next;
                    evenNode -> next = nullptr;
                }
                else{
                    if(f){
                        head = curr;
                        f = false;
                    }
                    oddNode -> next = curr;
                    curr = curr -> next;
                    oddNode = oddNode -> next;
                    oddNode -> next = nullptr;
                }
                cnt++;
            }
            oddNode -> next = firstEvenNode;
            return head;
        }
    };