//#include<iostream>
//using namespace std;
//const int maxrow = 20, maxcot = 15;
//void nhap(int a[maxrow][maxcot], int r, int c)
//{
//	for (int i = 0; i < r; i++) {
//		cout << "nhap " << c << " so cho dong thu " << i + 1 << " la: ";
//		for (int j = 0; j < c; j++) {
//			cin >> a[i][j];
//		}
//	}
//}
//void xuat(int a[maxrow][maxcot], int r, int c)
//{
//	cout << "mang dang luu tru la: " << endl;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			cout << a[i][j] << "\t";
//		}cout << endl;
//	}
//}
//void zigzag4chieu(int p[maxrow][maxcot], int n, int value)
//{
//	int maxc, maxr, minc, minr;
//	maxc = maxr = n - 1;
//	minc = minr = 0;
//	while (value <= n * n) {
//		for (int i = minc;i<maxc;i++)
//			p[minr][i] = value++;
//		minr++;
//		for (int i = minr; i < maxr; i++)
//			p[i][maxc] = value;
//		maxc--;
//		for (int i = maxc; i >= minc; i--)
//			p[maxr][i] = value++;
//		maxr--;
//		for (int i = maxr; i <= minr; i++)
//			p[i][maxc] = value++;
//		minc++;	
//	}
//}
//int duongcheochinh(int a[maxrow][maxcot], int r, int c)
//{
//	int t = 0;
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			if (i == j)
//				t = t + a[i][j];
//		}
//	}
//	return t;
//}
//int duongcheophu(int a[maxrow][maxcot], int r, int c)
//{
//	int t = 0;
//	for (int i = r - 1;i>=0; i--){
//		for (int j = c - 1; j >=0; j--){
//			if (i == j)
//				t = t + a[i][j];
//		}
//	}
//	return t;
//}
//int main()
//{
//	int r, c a[maxrow][maxcot], p[maxrow][maxcot;
//	do {
//		cout << "nhap so dong cua mang: ";
//		cin >> r;
//		if (r <= 0 || r > 20)
//		cout << "nhap sai. nhap lai: ";
//		} while (r <= 0 || r > 20);
//	do {
//		cout << "nhap so cot cua mang: ";
//		cin >> c;
//		if (c <= 0 || c > 15)
//		cout << "nhap sai. nhap lai: ";
//		} while (c <= 0 || c > 15);
//}