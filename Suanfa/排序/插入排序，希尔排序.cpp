/*
插入排序
*/
#include<iostream>
using namespace std;
int main()
{
	int a[8] = { 11,2,3,11,2,4,55,0 };
	int temp;
	for (int i = 1; i < 8; i++)
	{
		int j = i - 1;
		temp = a[i];
		while (j >= 0 && a[j] > temp)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
	for (int i = 0; i < 8; i++)
	{
		cout << a[i];
	}
	cin >> temp;
}
/*
希尔排序
插入排序是步长为1的希尔排序
先确定一个默认步长进行插入排序
依次降低步长
*/
#include<iostream>
using namespace std;
int main()
{
	int a[8] = { 11,2,3,11,2,4,55,0 };
	int temp;
	for (int i = 3; i>0; i--)
	{
		for (int j = i; j < 8; j++)
		{
			temp = a[j];
			int k = j - i;
			while (k >= 0 && a[k] > temp)
			{
				a[k + i] = a[k];
				k = k - i;
			}
			a[k + i] = temp;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		cout << a[i] << endl;
	}
	cin >> temp;
}
//插入排序是稳定排序，平均复杂度为O(n²)，最好复杂度为O（n）, 最坏复杂度为O（n²）, 空间复杂度O（1）
//希尔排序是不稳定排序，平均复杂度为O（n^1.3）, 最好复杂度O(n), 最坏为O（n²），空间复杂度O(1)
