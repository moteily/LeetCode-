//l1 l2 为头指针，且头指针有数据。
struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2)
{
    if (l1 == NULL && l2 == NULL)
        return NULL;
    else if (l1 == NULL && l2 != NULL)
        return l2;
    else if (l1 != NULL && l2 == NULL)
        return l1;
    else
    {
        struct ListNode *p1, *p2, *p3, *l3;
        if (l1->val >= l2->val)
        {
            l3 = l2;
            p3 = l2;
            p1 = l1;
            p2 = l2->next;
        }
        else
        {
            l3 = l1;
            p3 = l1;
            p1 = l1->next;
            p2 = l2;
        }
        while ((p1 != NULL) && (p2 != NULL))
        {
            if (p1->val >= p2->val)
            {
                p3->next = p2;
                p3 = p2;
                p2 = p2->next;
            }
            else
            {
                p3->next = p1;
                p3 = p1;
                p1 = p1->next;
            }
        }
        if (p1 != NULL)
            p3->next = p1;
        else
            p3->next = p2;
        return l3;
    }
}