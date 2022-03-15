
#include <algorithm>
#include <vector>

class Solution
{
public:
	bool hasGroupsSizeX(std::vector<int> &deck)
	{
		if (deck.size() == 1 || deck.size() == 0)
			return (false);

		int prev            = deck[0];
		unsigned int result = std::count(deck.begin(), deck.end(), deck[0]);

		for (int i = 1; i < deck.size(); i++)
		{
			if (deck[i] != prev)
			{
				result =
					gcd(result, std::count(deck.begin(), deck.end(), deck[i]));
				if (result == 1)
					return (false);
				prev = deck[i];
			}
		}
		return (true);
	}

	unsigned int gcd(unsigned int a, unsigned int b)
	{
		unsigned int x;
		unsigned int y;

		if (a > b)
		{
			x = a;
			y = b;
		}
		else
		{
			x = b;
			y = a;
		}
		if (x == 0)
			return (y);
		else if (y == 0)
			return (x);
		return gcd(y, x % y);
	}
};
