ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) { //sorting two lists
    if (l1 == NULL) {
        return l2;
    }
    if (l2 == NULL) {
        return l1;
    }

    if (l1->val > l2->val) {
        l2->next = mergeTwoLists(l1, l2->next);
        return l2;
    }
    else {
        l1->next = mergeTwoLists(l1->next, l2);
        return l1;
    }
}

ListNode* mergeKLists(vector<ListNode*>& lists) {
    int n = lists.size();
    if (n == 0)
        return NULL;

    ListNode* head = NULL;

    for (int i = 0; i < n; i++) { //sorting lists one by one
        head = mergeTwoLists(head, lists[i]);
    }

    return head;
}