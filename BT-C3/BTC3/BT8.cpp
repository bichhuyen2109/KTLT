#include<iostream>
using namespace std;
int main()
{
	int** p, h;
	do {
		cout << "ma tran vuong cap: ";
		cin >> h;
	} while (h <= 0);
	p = new int*[h];
	for (int i = 0, i < h; i++)
		p[i] = new int[h];


}