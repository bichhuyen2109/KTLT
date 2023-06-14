//#include<iostream>
//using namespace std;
//const int maxr = 100, maxc = 100;
//int a[maxr][maxc];
//void nhap(int n,int m) 
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << "nhap gia tri a[" << i << "][" << j << "]: ";
//			cin >> a[i][j];
//		}
//	}cout << "mang luu tru la: " << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++) 
//		{
//			cout << a[i][j]<<"\t";
//		}
//		cout << endl;
//	}
//}
//double tbc(int n, int m)
//{
//	int t = 0, l =0, tb;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			t = t + a[i][j];
//			l++;
//		}
//	}
//	tb = t / l;
//	return tb;
//}
//bool tk(int n, int m, int x)
//{
//	int l = 0;
//	for (int i = 0; i < maxr; i++) {
//		for (int j = 0; j < maxc; j++) {
//
//			if (x == a[i][j])
//			{
//				cout << "vi tri a[" << i << "][" << j << "]" << endl;
//				l++;
//			}
//		}
//	}
//
//int main()
//{
//	int u;
//	cout << "1: nhap va xuat mang/n" << "2: tinh trung binh cong cua cac phan tu/n" << "3: tim kiem gia tri nguyen x/n" << "4: hoan doi vi tri/n" << "5: tinh tich cac gia tri trong cot/n";
//	cin >> u;
//	switch(u>=0&&u<=5)
//		case 1 :
//			{int  n, m;
//			do {
//				cout << "nhap so dong va cot: ";
//				cin >> n >> m;
//				} while (n < 0 || m < 0);
//				nhap(n, m);
//				break; 
//		case 2:
//			cout << "trung binh cong cua tung phan tu trong mang la: " << tbc(n, m) << endl;
//			break;
//		case 3:
//		case 4:
//		case 5:
//
//	system("pause");
//	return 0;
//}