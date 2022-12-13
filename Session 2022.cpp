#include <iostream>

int main()
{
	std::cout << "Enter a natural number: " << '\n';
	int a;
	std::cin >> a;
	if (a <= 0) {
		std::cout<<"Wrong number!";
		return 0;
	}
	std::cout << "Enter the n value: " << '\n';
	int n;
	std::cin >> n;
	if (n == 0) {
		std::cout << "Wrong number!";
		return 0;
	}
	int res = 0;
	for (int i = 1; i <= a; ++i) {
		if (a % i == 0 && i % n == 0) {
			res = res + 1;
		}
	}
	std::cout << "The number " << a << " has " << res << " divisor fo multiples of " << n;
}
