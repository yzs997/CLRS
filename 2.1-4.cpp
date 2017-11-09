#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> num1 = { 1, 1, 1, 1 };
	deque<int> num2 = { 1, 0, 0, 0 };
	deque<int> result;
	int carry = 0;
	for (int i = num1.size() - 1; i >= 0; --i) {
		int j = (num1[i] + num2[i] + carry) % 2;
		result.push_front(j);
		carry = (num1[i] + num2[i] + carry) / 2;
	}
	result.push_front(carry);
	for (auto i : result)
		std::cout << i;
	std::cout << endl;
	getchar();
	return 0;
}
