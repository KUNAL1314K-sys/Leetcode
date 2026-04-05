struct ListNode* sort(struct ListNode* head) {
    if (head == NULL) return NULL;

    struct ListNode* t1 = head;
    while (t1 != NULL) {
        struct ListNode* t2 = t1->next;
        while (t2 != NULL) {
            if (t1->val > t2->val) {
                int temp = t1->val;
                t1->val = t2->val;
                t2->val = temp;
            }
            t2 = t2->next;
        }
        t1 = t1->next;
    }
    return head;
}

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {

    struct ListNode* l1 = sort(list1);
    struct ListNode* l2 = sort(list2);


    if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    struct ListNode* temp = l1;
    while (temp->next != NULL) {
        temp = temp->next;
    }


    temp->next = l2;


    l1 = sort(l1);

    return l1;
}