//��Ŀ������һ���ַ��������㽫�ַ������±��룬���������ַ��滻�ɡ��������ֵĸ��� + �ַ����������ַ���AAAABCCDAA�ᱻ�����4A1B2C1D2A��
#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	string str;
	cin >> str;
	int t = 1;
	int q = 0;
	for (int i = 1; i<str.size(); i++)
	{
		if (str[i] != str[i - 1])
		{
			cout << t << str[i - 1];
			t = 1;
		}
		else
			t++;
	}
	cout << t << str[str.size() - 1];
	return 0;
}
