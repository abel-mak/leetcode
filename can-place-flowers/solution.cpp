#include <vector>

class Solution
{
public:
	bool canPlaceFlowers(std::vector<int> &flowerbed, int n)
	{
		int i;

		i = 0;
		while (i < flowerbed.size())
		{
			if (flowerbed[i] == 0 && ((i - 1) < 0 || flowerbed[i - 1] == 0) &&
			    (i + 1 >= flowerbed.size() || flowerbed[i + 1] == 0) && n > 0)
			{
				n--;
				i += 2;
			}
			else
				i++;
		}
		return (n == 0);
	}
};
