#include<iostream>
#include<Windows.h>


using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);


	/// 26.04.2025


	/*int a, b, c;
	cin >> a >> b >> c;

	if (a > b && a > c)
		cout << a << endl;
	else if (b > c)
		cout << b << endl;
	else
		cout << c << endl;*/


	//�������� ��������� ����� �������� ������ � ����������� �� �����.
	// ���� ���������� �������� ������ �� ����� ������ 100 ������, �� 
	// ������ 5 %, ����� 500���.� 10 %, ����� 1000��� � 25 % .���������� 
	// ������ ������ �����, ������� ������ �������� ���������� � ������ 
	// ������ �%, ������� �� �������.

	int a, b;
	cin >> a;
	if (a >= 0 && a <= 100)
	{
		b = 0;
	}
	else if (a > 100 && a <= 500)
	{
		b = 5;
	}
	else if (a > 500 && a <= 1000)
	{
		b = 10;
	}
	else
	{
		b = 25;
	}



	cout << "?????? ";
	cout << b << endl;
	cout << "?? ?????? ";
	cout << a - a / 100. * b << endl;



	/*int a = 5;
	if (a > 3)
	{
		cout << "Yes" << endl;
	}
	else
	{
		if (a > 6)
		{

		}
	}*/




	// !  
	// > < <= >= == != ==
	// && and, ||or, ^ xor



	/*���� ��� ����� ����� : A, B, C.��������� ���������� ��������� -
	  ��� : ������ ���� �� ����� A, B, C �������������.*/

	  /*int a, b, c;
	  cin >> a;
	  cin >> b;
	  cin >> c;
	  bool r = (a > 0) + (b > 0) + (c > 0) == 1;*/



	  /*���� ����� ����� a, b, c, ���������� ��������� ���������� ��� -
		  ���������.��������� ���������� ������������ : ������������ �� ����� -
		  ���� a, b, c �������� �������������.*/

		  /*int a, b, c;
		  cin >> a;
		  cin >> b;
		  cin >> c;
		  cout << (a * a + b * b == c * c) << endl;*/

		  /*unsigned int a = -3000000000;
		  cout << a << endl;
		  cout << sizeof(int) << endl;

		  const int b = 5;*/


		  // -, +, ++, --
		  // +, -, *, /, +=, -=, /=, *=, %, %=

		  //int a = 5, b = 4, c;
		  /*c = --b * (++a + ++b);
		  cout << a << endl;
		  cout << b << endl;
		  cout << c << endl;*/

		  /*cout << (float)a / b << endl;
		  cout << pow(2, 5) << endl;
		  cout << abs(-3) << endl;
		  cout << sqrt(-3) << endl;*/

		  /*int a = 3, b = 4, c = 6;
		  float s, p;
		  p = (a + b + c) / 2.;
		  s = sqrt(p * (p - a) * (p - b) * (p - c));
		  cout << p << endl;
		  cout << s << endl;*/


		  /*cout << "Hello C++" << endl;
		  cout << "���� ����� �����" << endl;

		  cout << "\t\tHello\n\b";*/

		  /*cout << 123.33 << endl;
		  cout << "mama" << endl;*/

		  // bool      - 1b

		  // char      - 1b

		  // short     - 2b
		  // int       - 48b
		  // long      - 4b
		  // long long - 8b

		  // float     - 4b (7)
		  // double    - 8b (15)

		  // type name;

		  /*int year = 2025;

		  cout << year << endl;

		  float x = 1.5;
		  cout << x << endl;

		  char a = 'd';
		  cout << (int)a << endl;


		  bool b = true;
		  cout << b << endl;*/



	system("pause");
}