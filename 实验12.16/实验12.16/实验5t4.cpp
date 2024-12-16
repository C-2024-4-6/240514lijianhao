#include<iostream>
using namespace std;
class Student
{
public:
	int grade;
    char xh[10];
	Student(const char xh[]="0000000000", int grade=0)
	{
		for (int i = 0;i < 10;i++)
		{
			this->xh[i] = xh[i];
		}
		this->grade = grade;
	}
};
void max(Student* sp)
{
	char a[10];
	int n = 0;
	for (int i = 0;i < 5;i++)
	{
		if (sp[i].grade > n)
		{
			n = sp[i].grade;
			for (int j = 0;j < 10;j++)
			{
				a[j] = sp[i].xh[j];
			}
		}
	}
	for (int i = 0;i < 10;i++)
	{
		cout << a[i];
	}
}
int main()
{
	Student st[5] = { Student("0000000001",78),
			 Student("0000000002",69),
			 Student("0000000003",95),
			 Student("0000000004",75),
			 Student("0000000005",91) };
	Student* sp;
	sp = st;
	max(sp);
	return 0;
}