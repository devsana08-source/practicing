#include <iostream>

int main()
{
	int ipPart1, ipPart2, ipPart3, ipPart4;
	std::string ipNumber;
	std::cout << "Input 1st part of IP address:";
	std::cin >> ipPart1;
	std::cout << "Input 2nd part of IP address:";
	std::cin >> ipPart2;
	std::cout << "Input 3rd part of IP address:";
	std::cin >> ipPart3;
	std::cout << "Input 4th part of IP address:";
	std::cin >> ipPart4;
	
	std::cout<<"IP address is : ";

	//  it will print the ip address 
	std::cout << ipPart1 << "." << ipPart2 << "." << ipPart3 << "." << ipPart4 << std::endl;
	return 0;
}