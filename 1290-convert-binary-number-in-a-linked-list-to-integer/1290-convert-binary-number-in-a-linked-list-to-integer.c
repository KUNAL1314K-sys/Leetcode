int getDecimalValue(struct ListNode* head) {
    struct ListNode* temp = head;
    int len = 0;
    int ans = 0;

    while (temp != NULL) {
        len++;
        temp = temp->next;
    }

    temp = head;

    while (temp != NULL) {
        ans = ans + temp->val * pow(2, len - 1);
        len--;
        temp = temp->next;
    }

    return ans;
}