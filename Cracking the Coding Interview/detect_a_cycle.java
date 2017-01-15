	/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if(head == NULL)
        return false;
    
    Node * ptr = head;
    Node * ptr1 = head -> next -> next;
    
    while(ptr != ptr1 && ptr != NULL && ptr1 != NULL)
    {
        ptr = ptr -> next;
        ptr1 = ptr1 -> next -> next;
    }
    
    if(ptr == ptr1)
        return true;
    
    else
        return false;
}
