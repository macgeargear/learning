# Singly vs Doubly Linked List

*Advantages* :
    - Can be traversed in both directions
    - A given delete node in O(1) time with given reference/pointer to it.
    - Insert/Delete before a given node
    - Insert/Delete from both ends in O(1) times by maintaing tail.
*Disadvantages* :
    - Extra space for prev
    - Code become more complex


# Circular linked list 
*Advantages* :
    - we can traverse the whole list from any node
    - we can insert at the begining and end by just maintin of *reference/pointer* 
*Disadvantages* :
    - implementations of operation become more complex


# Circular doubly linked list
    1. Previous of head is last Node.
    2. Next of last Node is head
