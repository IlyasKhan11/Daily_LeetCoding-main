class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // Special case: if the list is empty or has only one node
        if (head == NULL) {
            return NULL;
        }
        if(head->next==NULL) return NULL;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        // Use two-pointer technique to find the middle node
        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        // Delete the middle node
        prev->next = slow->next;
        delete slow;

        return head;
    }
};
