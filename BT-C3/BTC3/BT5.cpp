#include<iostream>
using namespace std;
int fi(int* p, int n)
{
	if (*p == 1) return 1;
	if (*p == 0) return 0;
	else return fi(p[n-2], n) + fi(p[n-3],n);
}