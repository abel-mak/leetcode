#include <iostream>
#include <map>

class Node
{
public:
	int val;
	Node *next;
	Node *random;

	Node(int _val)
	{
		val    = _val;
		next   = NULL;
		random = NULL;
	}
};

class Solution
{
public:
	Node *copyRandomList(Node *head)
	{
		std::map<Node *, Node *> m;
		Node *mylist = cloneList(head, m);

		return (mylist);
	}
	Node *cloneList(Node *head, std::map<Node *, Node *> &m)
	{
		if (head == NULL)
			return NULL;
		Node *res = new Node(head->val);

		m[head]   = res;
		res->next = cloneList(head->next, m);
		res->random =
		    (head->random) != NULL ? (m.find(head->random))->second : NULL;
		return (res);
	}
};
