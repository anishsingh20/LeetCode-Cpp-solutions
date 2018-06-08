struct ListNode* reverseList(struct ListNode *head) {
        
    if(!head) return NULL;
        
        struct ListNode *curr=head,*prev=NULL,*next;
	

	
	while(curr)
	
	{
		next = curr->next;
		curr->next = prev; //making backwards link
		prev = curr;
		curr = next;
		
	}

	return prev;
}
