#include <iostream>
#include <vector>

using namespace std;

void INSERTION_SORT(vector<int>&);

int main()
{
	vector<int> vec = { 31, 41, 59, 26, 41, 58 };
	INSERTION_SORT(vec);
	for (auto i : vec)
		cout << i << " ";
	cout << endl;
	getchar();
	return 0;
}

void INSERTION_SORT(vector<int> &vec)
{
	for (int j = 1; j != vec.size(); ++j) {
		int key = vec[j];
		int i = j - 1;
		while (i >= 0 && vec[i] < key) {
			vec[i + 1] = vec[i];
			--i;
		}
		vec[i + 1] = key;
	}
}
