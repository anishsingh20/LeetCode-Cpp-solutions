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


    bool isPalindrome(struct ListNode* head) {
        
        if(head==NULL||head->next==NULL)
            return true;
        struct ListNode* slow=head;
        struct ListNode* fast=head;
        while(fast->next!=NULL&&fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverseList(slow->next);//reversing the next half of list
        slow=slow->next;//slow now points to the element next to mid
        while(slow!=NULL){
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
}
//T(n) = O(n) and S(n) = O(1)
