#include <iostream>
#include <sstream>
#include <string>

class Solution
{
public:
	bool isPalindrome(int x)
	{
		std::string str = std::to_string(x);

		return str == std::string(str.rbegin(), str.rend());
	}
};
