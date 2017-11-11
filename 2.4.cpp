#include <vector>
#include <iostream>

using namespace std;

int inversion(vector<int>&, int, int);
int merge(vector<int>&, int, int, int);

int main()
{
	vector<int> vec = { 6, 5, 4, 3, 2, 1 };
	cout << inversion(vec, 0, vec.size()) << endl;
	getchar();
	return 0;
}

int inversion(vector<int> &vec, int p, int r)
{
	int pair = 0;
	if (r - p > 1) {
		int q = (p + r) / 2;
		pair += inversion(vec, p, q);
		pair += inversion(vec, q, r);
		pair += merge(vec, p, q, r);
	}
	return pair;
}

int merge(vector<int> &vec, int p, int q, int r)
{
	int n1 = q - p;
	int n2 = r - q;
	int pair = 0;
	vector<int> v1(n1);
	vector<int> v2(n2);
	for (int i = 0; i != n1; ++i)
		v1[i] = vec[p + i];
	for (int i = 0; i != n2; ++i)
		v2[i] = vec[q + i];
	int j = 0;
	int k = 0;
	while (j < n1 && k < n2) {
		if (v1[j] <= v2[k]) 
			vec[p++] = v1[j++];
		else {
			vec[p++] = v2[k++];
			pair += n1 - j;
		}
	}
	if (j >= n1)
		while (k < n2)
		vec[p++] = v2[k++];
	else
		while (j < n1)
		vec[p++] = v1[j++];
	return pair;
}
