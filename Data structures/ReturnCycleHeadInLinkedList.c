struct ListNode *detectCycle(struct ListNode *head) {
    
   
   struct ListNode *slow = head, *fast = head ;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        
        //if cycle exists i.e fast = slow
        if(slow==fast)
        {
            fast = head;
            while(slow!=fast)
            {
                slow = slow->next;
                fast= fast->next;
            }
            return slow;
        }
        
    }
   
    return NULL;
    
    
}
