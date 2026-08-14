/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode* temp = head;
    int arr[100000];
    int i =0;
    while(temp!=NULL){
        arr[i++] = temp->val;
        temp = temp->next;
    }
    int start =0;
    int end = i-1;
    while(start<=end){
        if(arr[start]!=arr[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
    
}