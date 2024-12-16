#include<iostream>
using namespace std;
class Cfz
{
private:
	double length;
	double width;
	double height;
public:
	Cfz(double length=0.0, double width=0.0, double height=0.0)
	{
		this->length = length;
		this->width = width;
		this->height = height;
	}
	void set(double length, double width, double height)
	{
		this->length = length;
		this->width = width;
		this->height = height;
	}
	void calculate()
	{
		cout << length * width * height << endl;
	}
};
int main()
{
	for (int i = 1;i < 4;i++)
	{
		Cfz ci;
		double h, l, w;
		cin >> l >> w >> h;
		ci.set(l, w, h);
		ci.calculate();
	}
	return 0;
}