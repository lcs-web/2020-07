将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    if (!l1)
		return l2;
	if (!l2)
		return l1;
	struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode)), *t = head;
	while (l1 && l2){
		if (l1->val < l2->val){
			t->next = l1;
			l1 = l1->next;
		}			
		else{
			t->next = l2;
			l2 = l2->next;
		}			
		t = t->next;		
	}
	if (l1)      t->next = l1;
	else if (l2) t->next = l2;
	return head->next;
}
