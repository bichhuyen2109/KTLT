//#include<iostream>
//#include<conio.h>
//using namespace std;
//void nhap(int** p, int r, int c)
//{
//	for (int i = 0; i < r; i++) {
//		cout << "nhap " << c << " so cho dong thu " << i + 1 << " la: ";
//		for (int j = 0; j < c; j++) {
//			cin >> *(*(p + i) + j);
//		}
//	}
//}
//void xuat(int** p, int r, int c)
//{
//	cout << "mang dang luu tru la: " << endl;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cout << *(*(p + i) + j)<<"\t";
//		}cout << endl;
//	}
//}
//void zigzag(int** a, int n,int value)
//{
//	for (int i = n-1; i >= 0; i--)
//	{
//		if (i % 2 == 0)
//		{
//			for (int j = n - 1; j >= 0; j--)
//				*(*(a + i) + j) = value++;
//		}
//		else
//			for (int j = 0; j < n; j++)
//				*(*(a + i) + j) = value++;
//	}
//}
//bool timkiem(int**& p, double x, int r, int c)
//{
//	int kt = 0;
//	for (int i = 0; i < r; i++)
//		if (x == *(*(p + i) + (c - 1)) && kt == 0)
//		{
//			kt++;
//			return true;
//		}
//	return false;
//
//}
//int main()
//{
//	bool checks = false;
//	double x;
//	int** p,r,c;
//	int** a, value = 1,n;
//	int l;
//	do {
//		cout << "1: nhap mang.\n2: xuat mang.\n3: tim x.\n4: dung gia tri zigzag cho ma tran vuong\n5: thoat\n";
//		cin >> l;
//		switch (l) {
//			p = new int* [r];
//			for (int i = 0; i < r; i++)
//				*(p + i) = new int[c];
//		case 1:
//			do {
//				cout << "nhap so dong cua mang: ";
//				cin >> r;
//				if (r <= 0 || r > 20)
//					cout << "nhap sai. nhap lai: ";
//			} while (r <= 0 || r > 20);
//			do {
//				cout << "nhap so cot cua mang: ";
//				cin >> c;
//				if (c <= 0 || c > 15)
//					cout << "nhap sai. nhap lai: ";
//			} while (c <= 0 || c > 15);
//			nhap(p, r, c);
//			checks = true;
//			break;
//			_getch();
//		case 2:
//			if (checks==true) {
//				xuat(p, r, c);
//			}
//			else cout << "chua nhap mang \n";	
//			break;
//			_getch();
//		case 3:
//			if (checks == true) {
//				cout << "nhap so can tim: ";
//				cin >> x;
//				if (timkiem(p, x, r, c) == true)
//					cout << "dia chi so " << x << " xuat hien dau tien trong cot cuoi cung trong mang la: " << p;
//				else cout << "khong co so " << x << " trong cot cuoi cung cua mang";
//			}
//			else cout << "chua nhap mang \n";
//			break;
//			_getch();
//			for (int i = 0; i < r; i++)
//				delete[] p[i];
//			delete[] p;
//			p = 0;
//		case 4:
//			do {
//				cout << "nhap cap cua mang: ";
//				cin >> n;
//				if (n <= 0)
//					cout << "nhap sai. nhap lai: \n";
//			} while (n <= 0);
//			a = new int* [n];
//			for (int i = 0; i < n; i++)
//				*(a + i) = new int[n];
//			zigzag(a, n, value);
//			xuat(a, n, n);
//			for (int i = 0; i < n; i++)
//				delete[] a[i];
//			delete[] a;
//			a = 0;
//			break;
//			_getch();
//		}
//	} while (l > 0 && l < 5);
//	system("pause");
//	return 0;
//}