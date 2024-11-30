#include <iostream>
using namespace std;
int num(int a)
{
	int t;
	if (a == 1)
		t = 1;
	else
		t = (num(a - 1) + 1) * 2;
	return t;
}
int main()
{
	int n;
	cin >> n;
	cout << num(n) << endl;
}