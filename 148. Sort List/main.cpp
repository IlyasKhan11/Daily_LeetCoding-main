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
    ListNode* middle(ListNode* head){
       
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    ListNode* mergeSort(ListNode* left,ListNode* right){
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;

        while(left!=NULL && right!=NULL){
            if(left->val >= right->val){
                temp->next=right;
                right=right->next;
            }else{
                temp->next=left;
                left=left->next;
            }
            temp=temp->next;
        }
        if (left != nullptr) {
            temp->next = left;
        } else {
            temp->next = right;
        }
    
        return dummy->next;
    }

    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        ListNode* midNode=middle(head);

        ListNode* left=head;
        ListNode* right=midNode->next;
        midNode->next=NULL;

        left=sortList(left);
        right=sortList(right);

        return mergeSort(left,right);
    }
};