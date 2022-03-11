struct ListNode
{
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr)
	{
	}
	ListNode(int x) : val(x), next(nullptr)
	{
	}
	ListNode(int x, ListNode *next) : val(x), next(next)
	{
	}
};
class Solution
{
public:
	ListNode *rotateRight(ListNode *head, int k)
	{
		if (head != nullptr && head->next != nullptr)
		{
			int i;

			k = k % lstSize(head);
			i = 0;
			while (i < k)
			{
				ListNode *tmp = head;

				while (tmp != nullptr)
				{
					ListNode *prev = tmp;

					tmp = tmp->next;
					if (tmp->next == nullptr)
					{
						prev->next = nullptr;
						tmp->next  = head;
						head       = tmp;
						break;
					}
				}
				i++;
			}
		}
		return head;
	}
	unsigned int lstSize(ListNode *head)
	{
		unsigned int res;

		res = 0;
		while (head != nullptr)
		{
			res++;
			head = head->next;
		}
		return (res);
	}
};

// 2000000000

int main()
{
	ListNode a;
	a.val = 1;

	ListNode b;
	b.val = 2;

	ListNode c;
	c.val = 3;

	a.next = &b;
	b.next = &c;

	Solution s;

	s.rotateRight(&a, 2000000000);
}
