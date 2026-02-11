struct ListNode {
    ListNode *next;
    int val;
    ListNode(): val(0), next(nullptr) {};
    ListNode(int x): val(0), next(nullptr) {};
    ListNode(int x, ListNode *next): val(x), next(next) {};
};

class Solution_Of_Iteration {
    public:
        ListNode* removeElements(ListNode *head, int val) {
            ListNode *dummyHead = new ListNode(0, head);
            ListNode *temp = dummyHead; //定义哑头节点，易于处理边界情况
            while(temp->next) {
                if(temp->next->val == val) 
                    temp->next = temp->next->next;
                else 
                    temp = temp->next;
            }
            return dummyHead->next;
        }
};

class Solution_Of_Recursion {
    public:
        ListNode* removeElements(ListNode *head, int val) {
            if(head == nullptr)
                return head;
            head->next = removeElements(head->next, val);
            return head->val == val ? head->next : head;
        // 递：从head开始不断传入节点直到尾节点，
        // 先传入的节点先被处理，满足条件的节点被丢弃，不满足的被接上。
        }
};