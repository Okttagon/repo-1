#include <iostream>
using namespace std;
void Task1()
{
	//�������� ���������, ����������� ��� ����� ����(��������� � ����������) ����� ����� � �������� �� 10 �� 20 
	//(������������), ���� �� � ������� ������ "true", � ��������� ������ � "false";
	double a, b;
	cin >> a >> b;
	if ((a + b) > 10 && (a + b) <= 20)
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
}

void Task2()
{
	//�������� ���������, ��������� �� ����� ������ �true�, ���� ��� ������������� ���������, ����������� � �
	//������ ���� ��� ����� ������ ���� �� ����, ���� �� ����� ����� ������. ����� "false".
	double a, b;
	cin >> a >> b;
	if ( (a==10 && b==10) || (a+b)==10 )
		cout << "TRUE" << endl;
	else
		cout << "FALSE" << endl;
}

void Task3()
{
	//�������� ��������� ������� ������� �� ����� ������ ���� �������� ����� �� 1 �� 50. 
	//��������: "Your numbers: 1 3 5 7 9 11 13 �". ��� ������� ����������� ����� �++ ����.
	for (int i = 1; i <= 50; i++)
	{
		if (i % 2)
		{
			cout << i << ' ';
		}
	}
	cout << endl;
}

void Task4()
{
	//�� ���������.�������� ���������, �����������, �������� �� ��������� ����� - �������.������� 
	//����� � ��� ����� ������������� �����, ������� ������� ��� ������� ������ �� ������� � ���� ����.
	int j = 0, a = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		if (!(a % i))
		{
			j++;
		}
		if (j > 2)
		{
			break;
		}

	}
	if (j <= 2)
	{
		cout << "Prime number" << endl;
	}
	else
	{
		cout << "Composite number" << endl;
	}
}

void Task5()
{
	//�� ���������. ������������ ������ � ���������� ����� (���): �� 1 �� 3000. �������� ���������, ������� ���������� 
	//�������� �� ���� ��� ����������. ������ 4-� ��� �������� ����������, ����� ������� 100-��, ��� ���� ������ 400-� � ����������.
	//������� ���������� ������ ��������� � �������.
	int a;
	cin >> a;
	if ( !(a % 4) && ( ( (a % 100)) || !(a % 400) ) )
	{
		cout << "Leap year" << endl;
	}
	else
	{
		cout << "Not a leap year" << endl;
	}
}

int main()
{
	Task1();
	Task2();
	Task3();
	Task4();
	Task5();
	return 0;

}