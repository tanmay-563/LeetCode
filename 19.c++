BRUTE FORCE
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int len = 0;
        while(temp != NULL){
            temp = temp->next;
            len++;
        }
        if(len == n){
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        int pos = len - n;
        temp = head;
        for(int i = 1; i<pos; i++){
            temp = temp->next;
        }
        ListNode* del;
        del = temp->next ;
        temp->next = temp->next->next;
        delete del;
        return head;
    }
};
