/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
Approach 1  O(m*n)
for eery node in a list check if it is present in other lsit or not
*/
/*
Approach 2   O(m+n)  space O(n)
use a map to store the count of each node in a list
now traverse the other list and check if  that node is present in hash
if present then that is the intersection point
*/

/*
Approach 3   O(max(m,n) + abs(m-n) + min(m,n))
find the length of both the lists
len1 and len2
now traverse abs(len1-len2) nodes in the larger list such that they both come at an equal start point
now traverse both the lists till they arrive at a common node
*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2)
    {
        ListNode* ptr1 = head1;
        ListNode* ptr2 = head2;    
        
        while(ptr1!=ptr2)
        {
            
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            if(ptr1==ptr2)
                return ptr1;
            
            if(ptr1==NULL)
                ptr1=head2;
            if(ptr2==NULL)
                ptr2=head1;
            
        }
        return ptr1;
    }
};
