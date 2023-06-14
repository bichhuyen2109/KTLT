//#include<iostream>
//using namespace std;
//int main()
//{
//	const int d = 100, c = 100, h=100,p=100, u=100,e=100;
//		int a[d][c], n, b[h][p], f[u][e];
//		int l,t=0;
//		do {
//			cout << "nhap cap cua ma tran vuong: ";
//			cin >> n;
//			for (int i = 0; i < n; i++)
//			{
//				for (int j = 0; j < n; j++)
//				{
//					cout << "nhap gia tri a[" << i << "][" << j << "] la: ";
//					cin >> a[i][j];
//				}
//			}
//			for (int i = 0; i < n; i++)
//			{
//				for (int j = 0; j < n; j++)
//				{
//					cout << "nhap gia tri b[" << i << "][" << j << "] la: ";
//					cin >> a[i][j];
//				}
//			}
//		} while (n <= 0 || n > 10);
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				f[i][j] = a[i][j] * a[i][j];
//			}
//		}
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//				cout << f[i][j] << "\t";
//			cout << endl;
//		}
//		system("pause");
//		return 0;
//}