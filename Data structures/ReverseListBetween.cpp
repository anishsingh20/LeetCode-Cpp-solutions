//approach 1- reversing the pointers
ListNode* reverseBetween(ListNode* head, int m, int n) {
        if (!head)  return head;
        ListNode* tmp_head = new ListNode(1);
        tmp_head->next = head;
        
        ListNode* p = tmp_head;
        
        for(int i=1;i<m;i++)
            p = p->next;
        ListNode* pm = p->next;
        
        
        //p是翻转部分前的节点，pm是反转后的尾节点
        
        for(int i=0;i<(n-m);i++){
            ListNode* tmp = pm->next;
            pm->next = tmp->next;
            tmp->next = p->next;
            p->next = tmp;
        }
        return tmp_head->next;
    }
