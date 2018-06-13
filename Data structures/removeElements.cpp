 //recursive solution to remove val nodes with val- we simply modify the links and do not delete anything
 
 ListNode* removeElements(ListNode* head, int val) {
        
        if(!head)   return NULL;
        
        head->next = removeElements(head->next,val);
        
        return (head->val==val) ? head=head->next : head;
    }
