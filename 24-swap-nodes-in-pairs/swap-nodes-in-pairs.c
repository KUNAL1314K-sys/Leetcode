/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* first = head;
    struct ListNode* second;

    while(first != NULL && first->next != NULL){
        second = first->next;
        int temp = first->val;
        first->val = second->val;
        second->val = temp;
        first = second->next;
    }
    return head;
}