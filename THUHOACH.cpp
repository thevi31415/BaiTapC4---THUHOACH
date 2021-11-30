#include <iostream>
using namespace std;
void nhapmang(int a[], int n);
void thuhoach(int a[], int);
int main()
{
	int n;
	int a[100];
	cin >> n;
	nhapmang(a, n);
	thuhoach(a, n);
}
void nhapmang(int a[], int n) {
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}
void thuhoach(int a[], int n) {
	int s;
	int b[1000];
	
	for (int i = 0; i < n - 2; i++)
	{
		b[i] = a[i] + a[i + 1] + a[i + 2];
	}
	int s1 = b[0];
	int s2 = b[0];
	int s3 = b[0];
	for (int i = 0; i < n-2; i++)
	{
		if (s1 < b[i])
		{
			s1 = b[i];
		}
	}
	for (int i = 0; i < n-2; i++)
	{
		if (s1 == b[i]) {
			b[i] = 0;
		}
	}
	for (int i = 0; i < n - 2; i++)
	{
		if (s2 < b[i])
		{
			s2 = b[i];
		}
	}
	for (int i = 0; i < n - 2; i++)
	{
		if (s2 == b[i]) {
			b[i] = 0;
		}
	}
	for (int i = 0; i < n - 2; i++)
	{
		if (s3 < b[i])
		{
			s3 = b[i];
		}
	}
	for (int i = 0; i < n - 2; i++)
	{
		if (s3 == b[i]) {
			b[i] = 0;
		}
	}
	s = s1 + s2 + s3;
	cout << s;
}
