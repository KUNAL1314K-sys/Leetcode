/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {

    while (head != NULL && head->val == val) {
        head = head->next;
    }

    if (head == NULL)
        return NULL;

    struct ListNode* prev = head;
    struct ListNode* temp = head->next;

    while (temp != NULL) {

        if (temp->val == val) {
            prev->next = temp->next;
            temp = temp->next;
        }
        else {
            prev = temp;
            temp = temp->next;
        }
    }

    return head;
}