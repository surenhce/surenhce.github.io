#include<iostream.h>
#include<conio.h>

void main()
{
	int a[10], sum = 0, i;
	cout << "enter 10 number" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
		sum = sum + a[i];
	}
	cout << "sum=" << sum;
	getch();
}
