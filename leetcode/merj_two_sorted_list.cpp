class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // Dummy node to start the merged list
        ListNode dummy(0);
        ListNode* list = &dummy;

        // Merge while both lists are not empty
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                list->next = list1;
                list1 = list1->next;
            } else {
                list->next = list2;
                list2 = list2->next;
            }
            list = list->next; // move forward
        }

        // Attach remaining nodes
        if (list1 != nullptr) {
            list->next = list1;
        } else {
            list->next = list2;
        }

        return dummy.next;
    }
};
