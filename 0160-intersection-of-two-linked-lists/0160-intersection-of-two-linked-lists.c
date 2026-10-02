/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode*  A = headA;
    struct ListNode* B = headB;
    while(A != B){
        if (A == NULL){
            A = headB;
        }
        else{
            A = A->next;
        }
        
        if (B == NULL){
            B = headA;
        }
        else{
            B = B->next;
        }
        
    }
    return A;
}