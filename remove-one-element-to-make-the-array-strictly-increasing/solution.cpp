#include <vector>

class Solution
{
public:
	bool canBeIncreasing(std::vector<int> &nums)
	{
		if (nums.size() == 0 || nums.size() == 1)
			return (false);
		int elemNum = 0;

		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i - 1] >= nums[i])
			{
				elemNum++;
				if (i + 1 < nums.size())
				{
					if (nums[i - 1] >= nums[i + 1])
						nums.erase(nums.begin() + i - 1);
					else
						nums.erase(nums.begin() + i);
				}
				else
					nums.erase(nums.begin() + i);
				i = 0;
			}
			if (elemNum > 1)
				return (false);
		}
		return (true);
	}
};
