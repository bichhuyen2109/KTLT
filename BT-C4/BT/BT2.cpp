#include<iostream>
using namespace std;
int main()
{
	char a[50];
	int i = 0;
	cout << "nhap ho, ten:  ";
	cin.get(a, 50);
	while (a[i]!='\0')
	{
		if (a[i] != ' ')
		{
			cout << a[i];
			i++;
		}
		else
			i++;
	}
	cout << endl;
	system("pause");
	return 0;
}