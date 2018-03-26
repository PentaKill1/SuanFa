#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n, 0);
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
	}
	int max = a[0];
	int mix = 0;
	for (int i = 0; i<n; i++)
	{
		if (a[i]>max)
		{
			max = a[i];
		}
	}
	// «∑Ò–Ë“™—∞’“£ø
	//mix=max;
	mix = max;
	int x = 1;
	int temp = 0;
	for (int i = 0; i<a.size(); i++)
	{
		for (int j = 0; j<a.size() - 1 - i; j++)
		{
			if (a[j]>a[j + 1])
			{
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	}
	cout << a[a.size() - 2];
	return 0;
}

