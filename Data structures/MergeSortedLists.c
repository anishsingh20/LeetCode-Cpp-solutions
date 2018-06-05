struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    
    if(!l1 && !l2)  return NULL; 
        
        if(!l1) return l2;
        
        if(!l2) return l1;
        
        struct ListNode *new_head ;
        
        if(l1->val <= l2->val)
        {
            new_head = l1;
            new_head->next = mergeTwoLists(l1->next,l2);
        }
        
        else
        {
            new_head = l2;
            new_head->next = mergeTwoLists(l1,l2->next);
            
        }
        
        return new_head;
    
}
//T(n) = O(n) and S(n) = O(n) for recursion call stack
