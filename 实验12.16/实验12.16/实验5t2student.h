class Student              //类声明
{
private:
	int num;
	char name[20];
	char sex;
public:                   //公用成员函数原型声明
	Student(int num=000, const char name[]="lihua", char sex='n')
	{
		this->num = num;
		for (int i = 0;i < 20;i++)
		{
			this->name[i] = name[i];
		}
		this->sex = sex;
	}
	void display();
	void set_value(int num, const char name[], char sex)
	{
		this->num = num;
		for (int i = 0;i < 20;i++)
		{
			this->name[i] = name[i];
		}
		this->sex = sex;
	}
};
