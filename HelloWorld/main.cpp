#include <iostream>

#include <unordered_map>

int main()
{
	using CredentialsMap = std::unordered_map<std::string, std::string>;
	CredentialsMap userMap{
		{"Gleb", "Admin"} ,
		{"Roma", "User"} 
	};

	std::string name;
	std::cin >> name;

	const auto credIt = userMap.find(name);
	if (credIt != userMap.end())
		std::cout << credIt->second << std::endl;
	else
		std::cout << "canot find credentials for passed user name" << std::endl;
	
	return 0;
}