#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const pair<int, int> &, const pair<int, int> &);

int main(void)
{
	int n;

	cin >> n;

	vector<pair<int, int>> v(n);

	for (int i = 0; i < n; i++)
		cin >> v[i].first >> v[i].second;

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << "\n";

	return 0;
}

bool compare(const pair<int, int> &a, const pair<int, int> &b)
{
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}