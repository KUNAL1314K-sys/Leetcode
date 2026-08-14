/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// BRUTE FORCE METHOD
// bool isPalindrome(struct ListNode* head) {
//     struct ListNode* temp = head;
//     int arr[100000];
//     int i =0;
//     while(temp!=NULL){
//         arr[i++] = temp->val;
//         temp = temp->next;
//     }
//     int start =0;
//     int end = i-1;
//     while(start<=end){
//         if(arr[start]!=arr[end]){
//             return false;
//         }
//         start++;
//         end--;
//     }
//     return true;
    
// }

// FOLLOW UP 
bool isPalindrome(struct ListNode* head){
    struct ListNode* fast = head;
    struct ListNode* slow = head;

    // TO FIND MIDDLE NODE
    while(fast!=NULL && fast->next!=NULL){
        fast  = fast->next;
        fast = fast->next;
        slow = slow->next;
    }

    // REVERSE LINKED LIST FROM MIDDLE NODE
    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;
    while(slow!=NULL){
        next = slow->next;
        slow->next = prev;
        prev = slow;
        slow = next;
    }

    // CHECK PALINDROME
    struct ListNode* left = head;
    struct ListNode* right = prev;
    while(right!=NULL){
        if(left->val != right->val){
            return false;
        }
        left = left->next;
        right = right->next;
    }
    return true;
}

