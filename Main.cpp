#include <iostream>
#include <algorithm>

int main()
{
	int a = 5;
	int b = 8;
	int maximum;

	maximum = std::max(a, b);

	std::cout << "The max is " << maximum << '\n';
	std::cout << "The value of 'a' before swap is " << a << '\n';

	std::swap(a, b);
	maximum = std::max(a, b);

	std::cout << "The value of 'a' after swap is " << a << '\n';

	return 0;
}