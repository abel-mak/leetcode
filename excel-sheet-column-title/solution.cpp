#include <iostream>
#include <string>

class Solution
{
public:
	std::string convertToTitle(int columnNumber)
	{
		if (columnNumber <= 0)
			return "";
		char const *b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
		std::string res;

		while (columnNumber != 0)
		{
			columnNumber -= 1;
			res          = b[(columnNumber) % 26] + res;
			columnNumber = columnNumber / 26;
		}
		return res;
	}
};

int main()
{
	Solution s;

	std::cout << s.convertToTitle(1) << std::endl;
	std::cout << s.convertToTitle(28) << std::endl;
	std::cout << s.convertToTitle(701) << std::endl;
	std::cout << s.convertToTitle(52) << std::endl;
}
