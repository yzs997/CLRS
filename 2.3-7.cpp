#include <unordered_map>
#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>&, int);

int main()
{
	std::vector<int> vec = { 4, 3, 77, 81, 54, 32 };
	int target = 109;
	auto result = twoSum(vec, target);
	for (auto i : result)
		std::cout << i << " ";
	cout << endl;

}

vector<int> twoSum(vector<int> &numbers, int target)
{
	unordered_map<int, int> m;
	vector<int> result;
	for (int i = 0; i != numbers.size(); i++) {
		int remain = target - numbers[i];
		if (m.count(remain) > 0) {
			result.push_back(m[remain]);
			result.push_back(i);
			return result;
		}
		m[numbers[i]] = i;
	}
	return vector<int>();
}
