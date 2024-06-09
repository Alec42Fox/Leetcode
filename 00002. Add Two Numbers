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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
        //two lists of digits for positive ints in reverse order
        //adds two lists together, creates and returns new list

        bool bool_carry = 0; //stores if sum<10 and needs carry
        ListNode* ll_ans = new ListNode(); //return list answer
        ListNode* ll_header = ll_ans; //header of return list

        while(l1!=nullptr && l2!=nullptr){
            int int_sum = l1->val + l2->val + bool_carry;
            if(int_sum<10){
                bool_carry = 0;
            }else{
                int_sum -= 10;
                bool_carry = 1;
            }
            ListNode* ll_new = new ListNode(int_sum);
            ll_ans->next = ll_new;
            ll_ans = ll_ans->next;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=nullptr){
            int int_sum = l1->val + bool_carry;
            if(int_sum<10){
                bool_carry = 0;
            }else{
                int_sum -= 10;
                bool_carry = 1;
            }
            ListNode* ll_new = new ListNode(int_sum);
            ll_ans->next = ll_new;
            ll_ans = ll_ans->next;
            l1= l1->next;
        }
        while(l2!=nullptr){
            int int_sum = l2->val + bool_carry;
            if(int_sum<10){
                bool_carry = 0;
            }else{
                int_sum -= 10;
                bool_carry = 1;
            }
            ListNode* ll_new = new ListNode(int_sum);
            ll_ans->next = ll_new;
            ll_ans = ll_ans->next;
            l2= l2->next;
        }
        if(bool_carry){
            ll_ans->next = new ListNode(bool_carry);
        }
        return ll_header->next;
    }
};
