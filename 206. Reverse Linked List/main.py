# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        arr=[]

        temp=head
        while temp!=None:
            arr.append(temp.val)
            temp=temp.next
        
        n=len(arr)-1
        temp=head
        while temp!=None:
            temp.val=arr[n]

            temp=temp.next
            n-=1
        
        return head