#include <iostream>

#include <unordered_map>

int main()
{
	using CredentialsMap = std::unordered_map<std::string, std::string>;
	constexpr std::string_view failureMessage{ "canot find credentials for passed user name" };

	CredentialsMap userMap{
		{"Gleb", "Admin"} ,
		{"Roma", "User"} 
	};

	std::string name;
	std::cin >> name;

	const auto credIt = userMap.find(name);
	if (credIt != userMap.end())
	{
		const auto [userName, cred] = *credIt;
		std::cout << cred << std::endl;
	}
	else
	{
		std::cout << failureMessage << std::endl;
	}
		
	return 0;
}