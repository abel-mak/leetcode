
#include <vector>

class Solution
{
public:
	bool checkIfExist(std::vector<int> &arr)
	{
		int i;

		i = 0;
		while (i < arr.size())
		{
			int j;
			int tmp = 2 * arr[i];

			j = 0;
			while (j < arr.size())
			{
				if (tmp == arr[j] && j != i)
					return (true);
				j++;
			}
			i++;
		}
		return (false);
	}
};
