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
private:
    int Len(ListNode* head){
        ListNode* temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        return count;
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL || Len(head)<k) return head;
        int count =0;
        ListNode* next=nullptr;
        ListNode* current=head;
        ListNode* prev=nullptr;
        while(count<k && current != nullptr){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            count++;
        }

        if(next!= nullptr) head->next=reverseKGroup(next,k);
        return prev;
    }
};