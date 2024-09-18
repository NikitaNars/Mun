#include <iostream>
int main()
{
	int num;
	int mun;
	int a;
	int b;

	std::cout << "num: ";
	std::cin >> num;

	a = num / 10;
	b = num % 10;
	
	mun = b * 10 + a;
	std::cout << mun;
	

}