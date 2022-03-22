
#include <string>

class Solution
{
public:
	bool isLongPressedName(std::string name, std::string typed)
	{
		if (!name.length() || !typed.length())
			return (false);
		int i;
		int j;
		char prev = name[0];

		i = 0;
		j = 0;
		while (i < typed.length() && j < name.length())
		{
			if (typed[i] == name[j])
			{
				prev = name[j];
				j++;
				i++;
			}
			else
			{
				if (j > 0 && typed[i] == prev)
					i++;
				else
					return (false);
			}
		}
		return (true);
	}
};
