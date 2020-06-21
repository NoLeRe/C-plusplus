class Solution {
public:
	ListNode *detectCycle(ListNode *head) {
		ListNode* slow = head;
		ListNode* fast = head;
		bool flag = false;
		while (fast&&fast->next)
		{
			fast = fast->next->next;
			slow = slow->next;
			if (slow == fast)
			{
				slow = head;
				while (slow != fast)
				{
					slow = slow->next;
					fast = fast->next;
				}
				return slow;
			}
		}
		return nullptr;

	}
};