#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{
	int i = 0,n=0,j=0;
while (i<size1)
	{
		if (j < size2)
		{
			if (list1[i] < list2[j])
			{
				list3[n] = list1[i];
				i++;
			}
			else
			{
				list3[n] = list2[j];
				j++;
			}
		}
		else
		{
			list3[n] = list1[i];
			i++;
		}
		n++;
	}
	while (j < size2)
	{
		list3[n] = list2[j];
		j++;
		n++;
	}
	for (int i = 0;i < n;i++)
	{
		cout << list3[i] << " ";
	}
}
int main()
{
	int n1, n2,a[80],b[80],c[160];
	cout << "Enter list1:";
	cin >> n1;
	for (int i = 0;i < n1;i++)
	{
		cin >> a[i];
	}
	cout << "Enter list2:";
	cin >> n2;
	for (int i = 0;i < n2;i++)
	{
		cin >> b[i];
	}
	merge(a, n1, b, n2, c);
	
}