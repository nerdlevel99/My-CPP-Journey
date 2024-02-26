#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_sol(vector<int> arr, long long int n, long long int sol, long long int m)
{
	long long int sum = 0;

	for (long long int i = 0; i < n; i++)
	{
		if (arr[i] - sol <= 0)
			continue;
		sum += (arr[i] - sol);
	}

	return sum >= m;
}

int main()
{
	long long int n, m;
	cin >> n >> m;

	vector<int> arr(n);

	for (long long int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	long long int s = 0, e = *max_element(arr.begin(), arr.end());
	long long int ans = -1;

	while (s <= e)
	{
		long long int mid = s + (e - s) / 2;

		if (is_sol(arr, n, mid, m))
		{
			ans = mid;
			s = mid + 1;
		}
		else
		{
			e = mid - 1;
		}
	}

	cout << ans;

	return 0;
}
