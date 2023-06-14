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
int timkiem(int* p, int n, int x)
{
	int vt;
	bool trule = 0;
	for (int i = 0; i < n; i++)
	{
		if (x == p[i] && trule == 0)
		{
			vt = i;
			trule++;
		}
	}
	if (trule == 1) return vt;
	else delete[] p; p = 0;
}
int main()
{
	int* p, n, x;
	do {
		cout << "nhap so phan tu: ";
		cin >> n;
	} while (n <= 0);
	cout << endl;
	p = new int[n];
	nhap(p, n);
	cout << endl;
	cout << "nhap so nguyen can tim: ";
	cin >> x;
	cout << endl;
	cout <<"vi tri xuat hien dau tien: "<< timkiem(p, n, x);
	cout << endl;
	return 0;
}