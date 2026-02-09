struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class solution {
    public:
        ListNode *getIntersactionNode(ListNode *headA, ListNode *headB) {
            if(!headA || !headB)    //先判断两个链表是否为空
                return nullptr;
            ListNode *pA = headA, *pB = headB;
            while(pA != pB) {
                //虽然两段链表长度不一，但如果让两个指针风别走过二者，
                //当二者步数相同时必然相遇或走到空节点。
                pA = pA == nullptr ? headB : pA->next;  
                pB = pB == nullptr ? headA : pB->next;
            }
            return pA;
        }
};