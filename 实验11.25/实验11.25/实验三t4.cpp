#include <iostream>
using namespace std;
#include "mytriangle.h"
int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
	{
		cout << _area(a, b, c) << endl;
	}
	else
		cout << "无法组成三角形。";
	return 0;
}