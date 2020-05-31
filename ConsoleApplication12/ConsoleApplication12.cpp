#include <iostream>
#include <string>

std::string foo(const std::string& str)
{
	std::string ret;
	for (auto ch : str)
	{
		ret.push_back(ch);
		if (ch == ' ') ret.push_back(ch);
	}
	return ret;
}

int main()
{
	std::string str{ "o n e t o o sana string..." };
	foo(str).swap(str);
	std::cout << str;
}