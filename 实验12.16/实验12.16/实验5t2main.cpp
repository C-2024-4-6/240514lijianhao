#include <iostream>             //将类声明头文件包含进来
#include "实验5t2student.h"
int main()
{
	Student stud;                //定义对象
	Student stud1(007, "tcg", 'n');
	stud.display();              //执行stud对象的display函数
	stud1.display();
	stud1.set_value(999, "abc", 'm');
	stud1.display();
	return 0;
}
