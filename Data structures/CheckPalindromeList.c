/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

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
        
        while(fast && fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        //when fast becomes NULL, then slow is the middle of list
        
        struct ListNode *mid = reverseList(slow->next);//reversing the next half of list after the middle of list
        
        slow->next=NULL;//making the last mode of first half NULL
        
        //now comparing the 2 halves
        while(mid!=NULL){
            if(head->val!=mid->val)
                return false;
            head=head->next;
            mid=mid->next;
        }
        return true;
}
