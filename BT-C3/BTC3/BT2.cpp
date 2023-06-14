#include <iostream>
using namespace std;
int main()
{
	int* p;
	int a[30];
	int n;
	do {
		cout << "nhap so phan tu trong mang: ";
		cin >> n;
	} while (n < 0 && n > 30);
	for (int i = 0; i < n; i++)
		a[i] = rand() % 10;
	p = a;
	cout << "xuat mang voi ki phap doi do"<<endl;
	for (int i = 0; i < n; i++)
		cout << *(p + i)<<" " ;
	cout<<endl;
	cout << "xuat mang voi ki phap chi so" << endl;
	for (int i = 0; i < n; i++)
		cout << p[i] <<" ";
	cout << endl;
	system("pause");
	return 0;
} 