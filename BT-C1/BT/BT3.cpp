//#include<iostream>
//using namespace std;
//int main()
//{
//	const int d = 100, c = 100;
//	int a[d][c];
//	int n, m;
//	do
//	{
//
//		cout << "nhap so dong va so cot: ";
//		cin >> n >> m;
//	} while (n > 10 || n <= 0 && m > 15 || m <= 0);
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//		{
//			cout << "nhap gia tri a[" << i << "][" << j << "]: ";
//			cin >> a[i][j];
//		}
//	int t = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//			t = t + a[i][j];
//	}
//	cout << t << endl;
//	int min = a[0][0], o = 0, b = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (min > a[i][j])
//			{
//				min = a[i][j];
//				o = i; b = j;
//			}
//
//		}
//
//	}cout << min << endl; cout << "vi tri cua gia tri nho nhat la a[" << o << "][" << b << "]" << endl;
//	int max = a[0][0], h = 0, v = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (max < a[i][j])
//			{
//				max = a[i][j];
//				h = i; v = j;
//			}
//
//		}
//
//	}cout << max << endl; cout << "vi tri cua gia tri lon nhat la a[" << h << "][" << v << "]" << endl;
//	system("pause");
//	return 0;
//}