#include <iostream>

#include <unordered_map>

int main()
{
	std::unordered_map<std::string, std::string> userMap;
	userMap.emplace("Gleb", "Admin");
	userMap.emplace("Roma", "User");

	std::string name;
	std::cin >> name;

	std::cout << userMap[name] << std::endl;
	return 0;
}