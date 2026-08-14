/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* temp = head;
    int count =0;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    int n=0;
    if (count%2 == 0){
        n = count/2;
    }
    else{
        n = (count-1)/2;
    }

    struct ListNode* mid = head;
    for (int i =0;i<n;i++){
        mid = mid->next;
    }

    return mid;
    
}