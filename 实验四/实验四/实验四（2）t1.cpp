#include<iostream>
using namespace std;
int* f()
{
	int* pa = new int[4];
	pa[0] = 1;
	pa[1] = 2;
	pa[2] = 3;
	pa[3] = 4;
	return pa;
}
void main()
{
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[] p;
}
