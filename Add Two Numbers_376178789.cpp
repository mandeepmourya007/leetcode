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
        
        int carry=0;
        int sum=0;
        ListNode * l, *temp=NULL;
        
        while(l1 || l2)
        {
            sum= (l1?(l1->val):0)  +(l2?l2->val:0)  +carry;
            carry= sum>9?1:0  ;
            if(temp==NULL)
            {
                temp=new ListNode(sum%10);
                l=temp;
            }
            else
            {
                temp->next = new ListNode(sum%10);
                cout<<sum;
                temp=temp->next;
            }
            if(  l1)
            l1=l1->next;
             if(  l2)
            l2 = l2->next;
            
                
            
        }
        if (carry)
            temp->next=new ListNode(1);
        return l;
        
    }
};
