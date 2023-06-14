#include<iostream>
using namespace std;
const int maxr = 100, maxc = 100;
int a[maxr][maxc];
void nhap(int n,int m) 
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "nhap gia tri a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}