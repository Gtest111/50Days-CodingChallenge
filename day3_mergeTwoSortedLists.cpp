#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <unordered_set>

using namespace std;


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
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* head=new ListNode(0);
            ListNode* temp=NULL;
            temp=head;
            while(list1!=NULL && list2!=NULL)
            {
    
                if(list1->val<=list2->val)
                {
                    head->next=list1;
                    list1=list1->next;
                }
                else
                {
                    head->next=list2;
                    list2=list2->next;
                }
                head=head->next;
            }
            if(list2!=NULL)head->next=list2;
            if(list1!=NULL)head->next=list1;
    
            return temp->next;
        }
    };