
#include <vector>

class Solution
{
public:
	bool validMountainArray(std::vector<int> &arr)
	{
		bool peak = false;
		int prev;

		if (arr.size() < 3)
			return (false);

		prev = arr[0];

		for (int i = 1; i < arr.size(); i++)
		{
			if (peak == false && prev > arr[i] && i > 1)
				peak = true;
			else if (peak == false && prev >= arr[i])
				return (false);
			else if (peak == true && prev <= arr[i])
				return (false);
			prev = arr[i];
		}
		return (peak);
	}
};
