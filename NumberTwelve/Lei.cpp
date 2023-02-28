#include<iostream>
#include<string.h>

int main()
{
	std::string str;  //string的定义包含在了默认命名空间std里面
	std::cin >> str;

	for (int i = str.size() - 1; i >= 0; i--)
	{
		std::cout << str[i];
	}
	std::cout <<std::endl;

}
