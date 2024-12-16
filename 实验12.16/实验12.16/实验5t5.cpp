#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int x = 0, int y = 0)
	{
		this->x = x;
		this->y = y;
	}
	void setpoint(int i,int j)
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")"<<endl;
	}
};
int main()
{
	Point p(60,80);
	p.display();
	p.setpoint(15, 25);
	p.display();
	return 0;
}