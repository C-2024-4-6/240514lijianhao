#include <iostream>
using namespace std;
int main() {
	char ch;
	int a = 0, b = 0, c = 0, d = 0;
	cout<< "请输入一行字符: ";
	while ((ch=getchar())!= '\n') {
		if (ch>='a' && ch<='z' || ch>='A' && ch <='Z') {
			a++;
		}
		else if (ch==' ') {
			b++;
		}
		else if (ch>='0' && ch<='9') {
			c++;
		}
		else {
			d++;
		}
	}
	cout << "英文字母个数: " << a << endl;
	cout << "空格个数: " << b << endl;
	cout << "数字字符个数: " << c << endl;
	cout << "其他字符个数: " << d << endl;
	return 0;
}