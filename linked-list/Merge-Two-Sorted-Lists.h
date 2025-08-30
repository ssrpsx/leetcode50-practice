#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode *head;

        if (!list1)
            return list2;
        if (!list2)
            return list1;

        if (list1->val < list2->val)
        {
            head = new ListNode(list1->val);
            list1 = list1->next;
        }
        else
        {
            head = new ListNode(list2->val);
            list2 = list2->next;
        }

        ListNode *link = head;
        while (list1 != nullptr && list2 != nullptr)
        {
            if (list1->val <= list2->val)
            {
                ListNode *newNode = new ListNode(list1->val);
                link->next = newNode;
                list1 = list1->next;
            }
            else
            {
                ListNode *newNode = new ListNode(list2->val);
                link->next = newNode;
                list2 = list2->next;
            }

            link = link->next;
        }

        if(list1) link->next = list1;
        else link->next = list2;

        return head;
    }
};