难度中等603收藏分享切换为英文关注反馈给定一个链表，两两交换其中相邻的节点，并返回交换后的链表。

你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。

struct ListNode* swapPairs(struct ListNode* head){
    struct ListNode* h=malloc(sizeof(struct ListNode));//h
    h->next=head;//h指向head
    struct ListNode* p=h;//p保存当前h
    while(head&&head->next)
{
    h->next=head->next;//交换
    struct ListNode* a=head->next->next;//交换
    h->next->next=head;//交换
    head->next=a;//交换
    h=head;//重置h
    head=a;//重置head
}
    return p->next;
}
