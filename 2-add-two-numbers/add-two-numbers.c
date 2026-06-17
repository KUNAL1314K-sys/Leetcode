/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    struct ListNode* l3 = (struct ListNode*)malloc(sizeof(struct ListNode));

    struct ListNode* newnode = l3;


    int carry = 0;
    int sum;

    while( l1!=NULL || l2!=NULL){
        sum = carry;
        
        if(l1!=NULL){
            sum = sum + l1->val;
            l1 = l1->next;
        }
        
        if(l2!=NULL){
            sum = sum + l2->val;
            l2 = l2->next;
        }

        carry = sum/10;

        newnode->val = sum%10;
        newnode->next = NULL;
        
        if(l1!=NULL || l2!=NULL || carry!=0){
            newnode->next = (struct ListNode*)malloc(sizeof(struct ListNode));
            newnode = newnode->next;
        }
        else{
            newnode->next = NULL;
        }

    }
    if (carry!=0){
        newnode->val = carry;
        newnode->next = NULL;
    }
    return l3;
}