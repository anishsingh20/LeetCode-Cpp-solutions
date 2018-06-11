//approach 1- reversing the pointers
ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (!head)  return head;
        ListNode* tmp_head = new ListNode(1);
        tmp_head->next = head;
        
        ListNode* p = tmp_head;
        
        for(int i=1;i<m;i++)
            p = p->next;
        ListNode* pm = p->next;
        
        for(int i=0;i<(n-m);i++){
            ListNode* tmp = pm->next;
            pm->next = tmp->next;
            tmp->next = p->next;
            p->next = tmp;
        }
        return tmp_head->next;
    }

//approach-2 simple-Swapping or only reversing the node's data using a stack
 ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        ListNode *temp = head;
        
        if(head==NULL)
                return NULL;
        
        int len = length(head);
        
       
               
        stack<int> s;
        
        //case1-when whole list is reversed
        if(m == 1 && n == len )
        {
            ListNode *temp3 = head;
            
            s.push(temp->val);
            
            while(m<n)
            {
                temp = temp->next;
                s.push(temp->val);
                m++;
            }
            
            
            while(!s.empty())
            {
            	
                temp3->val = s.top();
                s.pop();
                
                temp3 = temp3->next;
            }
            
            return head;
        }
     
        //case2
        if(m==1 && n < len)
        {
        
            ListNode *temp1 = head;
            s.push(temp1->val);
            
            while(m<n)
            {
                temp = temp->next;
                s.push(temp->val);
                m++;
            }
            
            
            while(!s.empty())
            {
                temp1->val = s.top();
                s.pop();
                
                temp1 = temp1->next;
            }
            
            return head;
            
        
        }
        
        //case 3-reversing in between
        if(m > 1 && n <= len)
        {
            ListNode *temp2 = head;
            
            for(int i = 1 ; i < m ; i++)
            {
                
                temp = temp->next;
                temp2 = temp;
            }
            
            s.push(temp->val);
            while(m<n)
            {
                temp = temp->next;
                s.push(temp->val);
                m++;
            }
            
            while(!s.empty())
            {
                temp2->val = s.top();
                s.pop();
                
                temp2 = temp2->next;
            }
            
           
            
        }
        
         return head;
      
       
    }//T(n) = O(n) and S(n) = O(n) for stack space
