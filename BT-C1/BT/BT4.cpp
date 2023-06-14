//#include<iostream>
//using namespace std;
//int main()
//{
//	const int d = 100, c = 100;
//	int a[d][c];
//	int n, m, k,x;
//	do
//	{
//
//		cout << "nhap so dong va so cot: ";
//		cin >> n >> m;
//	} while (n > 5 || n <= 0 && m > 6 || m <= 0);
//	for (int i = 0; i < n; i++)
//		for (int j = 0; j < m; j++)
//		{
//			cout << "nhap gia tri a[" << i << "][" << j << "]: ";
//			cin >> a[i][j];
//		}
//	/*char h; int t = 0;
//	cout << "ban muon tinh tong theo dong <d> hoac theo cot <c>: ";
//	cin >> h;
//	cout << "tinh " << h << " may: "; cin >> k;
//	if (h = d) 
//	{
//		for (int j = 0; j <= m; j++) 
//		{
//			t = t + a[k][j];
//		}
//	}
//	if (h = c)
//	{
//		for (int i = 0; i <= n; i++)
//		{
//			t = t + a[i][k];
//		}
//	}
//	cout << t<<endl;*/
//	int  l = 0;
//	cout << "nhap gia tri can tim: ";
//	cin >> x;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (x == a[i][j])
//			{
//				cout << "vi tri a[" << i << "][" << j << "]" << endl;
//				l++;
//			}
//		}
//	}
//	cout <<"so lan lap lai trong mang: "<< l<<endl;
//	system("pause");
//	return 0;
//}