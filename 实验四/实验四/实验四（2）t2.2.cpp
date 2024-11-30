#include <iostream>
#include <cctype>
#include <cstring>
#include<string>
using namespace std;
// �������ڽ�ʮ�������ַ���ת��Ϊʮ��������
int parseHex(const char* const hexString) {
    int len = strlen(hexString);
    int result = 0;
    int base = 1;

    for (int i = len - 1; i >= 0; --i) {
        char ch = hexString[i];
        int digit;
        if (isdigit(ch)) {
            digit = ch - '0';
        }
        else if (tolower(ch) >= 'a' && tolower(ch) <= 'f') {
            digit = tolower(ch) - 'a' + 10;
        }
        

        result += digit * base;
        base *= 16;
    }
    return result;
}

int main() {
    

    const char* hexStr = "A5";
    int decimal = parseHex(hexStr);
    std::cout << "ʮ�������ַ��� " << hexStr << " ת�����ʮ������Ϊ: " << decimal << std::endl;
    return 0;
}