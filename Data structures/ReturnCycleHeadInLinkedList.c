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


struct ListNode *detectCycle(struct ListNode *head) {
//Cpp another solution-using a hash map-unordered set or set-
unordered_set<ListNode *>m;
	
	
	while(head)
	{
		
		//if a cycle found, if a previous visited node is found-
        //if there is already visited node in hash map, then there is a cycle and the find() function returns the iterator to the 
        //already visited node.And that node is the starting node of the cycle
		unordered_set<ListNode *>::iterator lastNodeCycle = m.find(head);
		if(lastNodeCycle != m.end())
		{
			ListNode *first = *lastNodeCycle;
			return first;
		}
		
		//otherwise simply push inside the map
		m.insert(head);
		head = head->next;
	}
	
	return NULL;
        
    }
//T(n) = 16s
