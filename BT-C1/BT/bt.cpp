//#include<iostream>
//using namespace std;
//int main()
//{
//	const int d = 100, c = 100;
//	int a[d][c], value =0;
//	int minr, minc, maxr, maxc, n;
//	cin >> n;
//	minr = minc = 0;
//	maxr = maxc = n - 1;
//	while (value <= n * n)
//{
//	for (int i = minr; i <= maxr; i++)
//		a[i][minc] = value++;
//	minc++;
//	for (int i = minc; i <= maxc; i++)
//		a[maxr][i] = value++;
//	maxr--;
//	for (int i = maxr; i >= minr; i--)
//		a[i][maxc] = value++;
//	maxc--;
//	for (int i = maxc; i >= minc; i--)
//		a[minr][i] = value++;
//	minr++;
//}
//system("pause");
//return 0;
//}