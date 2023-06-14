#include<iostream>
using namespace std;
int main()
{
	int x, y;
	int* p;
	p = &x;
	*p = 80;
	cout << &x << endl;
	cout << p << endl;
	cout << *p << endl;
	cout << x << endl;
	system("pause");
	return 0;
}