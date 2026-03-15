/*You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order, and each of their nodes contains a single digit. 
Add the two numbers and return the sum as a linked list.
You may assume the two numbers do not contain any leading zero, except the number 0 itself.*/
BRUTE FORCE
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*l3 = new ListNode(0);
        ListNode*head = l3;
        int carry = 0 ;
        while(l1 && l2){
            int value = l1->val + l2->val + carry;
            carry = (value/10);
            l3->next = new ListNode(value%10);
            l1 = l1->next;
            l2 = l2->next;
            l3 = l3->next;

        }
        while (l1){
            int value = l1->val + carry;
            carry = (value/10);
            l3->next = new ListNode(value%10);
            l1 = l1->next;
            l3 = l3->next;
        }
        while (l2){
            int value = l2->val + carry;
            carry = (value/10);
            l3-> next = new ListNode(value%10);
            l2=l2->next;
            l3=l3->next;
        }
        if(carry){
            l3->next = new ListNode(carry);
        }
        return head->next;
        
    }
};



...........................................\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\|||||||||||||||||||||||||||||////////////////////////////............................
    OPTIMAL SOLUTION
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        int n = 0;
        ListNode* temp = dummy;
        while(l1 != NULL || l2 != NULL || n){
            int sum =0;
            if(l1!=NULL){
                sum = sum + l1->val;
                l1 = l1->next;
            }
            if(l2 != NULL){
                sum = sum + l2->val;
                l2 = l2->next;
            }
            sum = sum + n;
            n = sum/10;            
            ListNode* node = new ListNode(sum%10);
            temp->next = node;
            temp = temp->next;
        }
        return dummy->next;
    }
};
