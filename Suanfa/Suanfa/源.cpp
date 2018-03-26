#include<iostream>
int main()
{
	int a[5] = { 1,2,3,4,5 };
	int *p=a;
	std::cout << "*++p:" << *(p++)<<"S:"<<2<<std::endl;
	int k;
	std::cin >> k;

}