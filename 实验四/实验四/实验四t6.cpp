#include<iostream>
#include<string>
using namespace std;
void count(const char s[],int n, int counts[])
{
	for (int i = 0;i < n;i++)
	{
		if (s[i] >= 'a' && s[i] < 'z')
		{
			counts[int(s[i]) - 97] += 1;
		}
		if (s[i] >= 'A' && s[i] < 'Z')
		{
			counts[int(s[i]) - 65] += 1;
		}
	}
	for (int j = 0;j < 26;j++)
	{
		if (counts[j] > 0)
		{
			cout << char(j + 97) << ":" << counts[j] << "times" << endl;
		}
	}
}
int main()
{
	string a;
	cout << "Enter a string:";
	getline(cin, a);
	char s[1000];
	int counts[26];
	for (int j = 0;j < size(a);j++)
	{
		s[j] = a[j];
	}
	for (int j = 0;j < 26;j++)
	{
		counts[j] = 0;
	}
	count(s, size(a), counts);
}