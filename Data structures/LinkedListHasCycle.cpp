
//same logic of using fast and slow pointers can also be used in finding the middle element of linked list. 
bool hasCycle(ListNode *head) {
        
        if(head==NULL || head->next==NULL)
    {
        return false;
    }
    
    struct ListNode *temp = head;//slow pointer
    struct ListNode *temp1 = head;//fast pointer
    
    while(temp1 && temp1->next)
    {
        temp = temp->next;
        temp1 = temp1->next->next;
       
        if(temp1==temp)
        {
            return true;
        }
        
    }
    
    return false;
    
    }

//method 2 in C

bool hasCycle(struct ListNode *head) {
    
    if(head==NULL || head->next==NULL)
    {
        return false;
    }
    
    struct ListNode *temp = head;
    struct ListNode *temp1 = head->next;
    
    while(temp!=temp1)
    {
       
       if( temp1==NULL || temp1->next==NULL)
       {
           return false;
        }
        
        temp = temp->next;
        temp1 = temp1->next->next;
        
        
    }
    
    return true;
}