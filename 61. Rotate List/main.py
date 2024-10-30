# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        if not head or not head.next:
            return head
        
        count = 1
        temp = head

        while temp.next is not None:
            count += 1
            temp = temp.next
        
        k = k % count
        if k == 0:
            return head

        count = count - k
        curr = head
        prev = None

        while count > 0:
            prev = curr
            curr = curr.next
            count -= 1
        
        # Set the new head and tail
        prev.next = None
        temp.next = head

        return curr
