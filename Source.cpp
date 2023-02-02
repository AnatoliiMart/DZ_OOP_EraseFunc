#include<iostream>
void spaceErase(std::string& str)
{
	std::cout << "String after Space Erase: " << std::endl;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (isalpha(str[i]))
		{
			size_t j = i;
			for (; j < str.length(); j++)
			{
				if (isspace(str[j]) && isspace(str[j+1]))
				{
					str.erase(j + 1, 1);
					j--;
				}
			}
			break;
		}
	}	
}
int main()
{
	std::cout << "String before Space Erase: " << std::endl;
	std::string  str1 = "    HELLO    WORLD";
	std::cout << str1 << std::endl;
	spaceErase  (str1);
	std::cout << str1 << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "String before Space Erase: " << std::endl;
	std::string  str2 = "HELLO    WORLD  I like    IT Step";
	std::cout << str2 << std::endl;
	spaceErase  (str2);
	std::cout << str2 << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "String before Space Erase: " << std::endl;
	std::string  str3 = "HELLO            ";
	std::cout << str3 << std::endl;
	spaceErase  (str3);
	std::cout << str3 << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Srting with only spaces: " << std::endl;
	std::string  str4 = "                        ";
	std::cout << str4 << std::endl;
	spaceErase  (str4);
	std::cout << str4 << std::endl;


}