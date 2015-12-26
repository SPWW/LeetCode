# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    # @param {ListNode} head
    # @return {ListNode}
    init = 0
    pre = None
    def reverseList(self, head):
        if head == None:
            return head
        while head != None:
            if self.init == 0:
                self.pre = None
                self.init = 1
            if head.next == None:
                head.next = self.pre
                return head
            else:
                self.temp = head.next
                head.next = self.pre
                self.pre = head
                head = self.temp
        
