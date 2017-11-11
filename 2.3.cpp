#include <iostream>
#include <vector>

using namespace std;

void bubblesort(vector<int>&);

int main()
{
	vector<int> vec = { 2, 4, 5, 6, 12, 52 ,32, 434, 43242, 21, 43, };
	bubblesort(vec);
	for (auto i : vec)
		cout << i << " ";
	cout << endl;
	getchar();
	return 0;
}

void bubblesort(vector<int> &vec)
{
	for (int i = 0; i != vec.size(); ++i)
		for (int j = vec.size() - 1; j != i; --j)
			if (vec[j] < vec[j - 1])
				swap(vec[j], vec[j - 1]);
}
