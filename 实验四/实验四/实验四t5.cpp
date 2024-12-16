#include<iostream>
#include<string>
using namespace std;
int indexOf(const char s1[],int n1, const char s2[],int n2)
{
	int i = 0;
	while (i + n1 <= n2)
	{
		bool a = true;
		int q = 0;
		for (int j = i;j < i + n1;j++)
		{
			if (s1[q] != s2[j])
			{
				a = false;
			}
			q++;
		}
		if (a)
		{
			return i;
		}
		i++;
	}
	return -1;
}
int main()
{
	string s1, s2;
	cout << "Enter the first string:";
	getline(cin, s1);
	cout << "Enter the second string:";
	getline(cin, s2);
	int n1=size(s1), n2=size(s2);
	char a[1000], b[1000];
	for (int i = 0;i < size(s1);i++)
	{
		a[i] = s1[i];
	}
	for (int i = 0;i < size(s2);i++)
	{
		b[i] = s2[i];
	}
	cout << "indexOf(¡°" << s1 << "¡±,¡°"<< s2 << "¡±) is" << indexOf(a, n1, b, n2);
}