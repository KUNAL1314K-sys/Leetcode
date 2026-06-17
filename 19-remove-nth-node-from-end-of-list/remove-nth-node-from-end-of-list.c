/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode* temp = head;
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;
    }
    if (n == count) {
        temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    int pos = count-n;
    struct ListNode* ptr = head;
    for(int i=0;i<pos-1;i++){
        ptr = ptr->next;
    }
    
    struct ListNode* del = ptr->next;
    ptr->next = del->next;
    free(del);

    return head;
}