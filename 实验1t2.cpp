 #include<iostream>
using namespace std;
int main()
{
	int r, h;
	const float pie = 3.14;
	float v;
	cout << "请输入半径和高：";
	cin >> r >> h;
	cout << "圆锥的体积为：";
	v = pie * r * r * h / 3;
	cout << v;
	return 0;
}
