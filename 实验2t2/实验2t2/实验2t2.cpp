#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float a;
	cin >> a;
	if (a>0 && a<1)
	{
		cout << 3 - 2 * a;
	}
	else if (a>=1 && a<5)
	{
		cout << 1 / (2 * a) + 1;
	}
	else if(a>=5 && a<10)
	{
		cout << a * a;
	}
	return 0;
}