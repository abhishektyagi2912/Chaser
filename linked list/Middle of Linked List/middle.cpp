// https://leetcode.com/problems/merge-two-sorted-lists/
// we do this by recursion
// if value pointend by l1 pointer is less than equal to value pointed by l2 pointer
// we wall call recursively l1 -> next and whole l2 list

if (l1->val <= l2->val)
{
    l1->next = mergeTwoLists(l1->next, l2);
    return l1;
}