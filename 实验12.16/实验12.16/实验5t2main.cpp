#include <iostream>             //��������ͷ�ļ���������
#include "ʵ��5t2student.h"
int main()
{
	Student stud;                //�������
	Student stud1(007, "tcg", 'n');
	stud.display();              //ִ��stud�����display����
	stud1.display();
	stud1.set_value(999, "abc", 'm');
	stud1.display();
	return 0;
}
