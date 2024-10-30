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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int L=0;
        ListNode* temp=head;
        while (temp){
            L++;
            temp=temp->next;
        }

        int eachBucketNodes=L/k;
        int remainingNodes=L%k;

        vector<ListNode*>results(k,NULL);

        ListNode* curr=head;
        ListNode* prev=NULL;

        for(int i=0;i<k;i++){
            results[i]=curr;

            for(int count=1;count<=eachBucketNodes+(remainingNodes>0?1:0);count++){
                prev=curr;
                curr=curr->next;
            }

            if(prev!=NULL){
                prev->next=NULL;
            }
            remainingNodes--;
        }

        return results;
    }
};