#include<iostream>
using namespace std;
void nhap(int* p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap so thu " << i + 1 << ": ";
		cin >> p[i];
	}
}
void daonguoc(int* p, int n)
{
	int x;
	for (int i = 0; i < n / 2; i++)
	{
		x = p[i];
		p[i] = p[n - (i + 1)];
		p[n - (i + 1)] = x;
	}

}
void xuat(int* p, int n)
{
	for (int i=0; i < n; i++)
	{
		cout << p[i] << "\t";
	}
}
int main()
{
	int* p, n;
	do {
		cout << "nhap so phan tu: ";
		cin >> n;
	} while (n <= 0);
	p = new int[n];
	nhap(p, n);
	cout << endl;
	daonguoc(p, n);
	cout << endl;
	xuat(p, n);
	cout << endl;
	delete[] p;
	p = 0;
	return 0;
}