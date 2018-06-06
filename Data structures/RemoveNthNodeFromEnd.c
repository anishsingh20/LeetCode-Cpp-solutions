int lengthList(struct ListNode *head)
{
    int count = 0;
    while(head)
    {
        count++;
        head = head->next;
    }
    
    return count;
}


struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    
     struct ListNode *del,*temp,*temp1=head;
        
        del = head;
        temp = head;

        int k = 0 ;
    
        int len = lengthList(head); //getting the length of list
        
        if(head==NULL)  return NULL;
    
        if(head->next==NULL)
        {
            free(head);
            return NULL;
        }
    
        //case when the head of list is to be deleted
        if(n==len)
        {
            head = head->next;
            free(del);
            return head;
        }
   
        
        while(temp!=NULL)
        {
            
            if(++k > n)
            {
                temp1 = del;
                del = del->next;
            }
            
            temp = temp->next;
        }
        
        temp1->next = del->next;
        free(del);
        
        return head;
        
        
    
}//T(n) = O(n) 
