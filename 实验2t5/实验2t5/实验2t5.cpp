#include <iostream>
using namespace std;
int main() {
	char ch;
	int a = 0, b = 0, c = 0, d = 0;
	cout<< "������һ���ַ�: ";
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
	cout << "Ӣ����ĸ����: " << a << endl;
	cout << "�ո����: " << b << endl;
	cout << "�����ַ�����: " << c << endl;
	cout << "�����ַ�����: " << d << endl;
	return 0;
}