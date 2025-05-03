#include<iostream>
#include<Windows.h>
#include<iomanip>



using namespace std;


const long double PI = 3.141592653589793238462643383279502884L;


enum DayOfWeek
{
	Monday = 1, Tuesday, Wednesday, Thursday , Friday, Saturday, Sunday, NoDay = -1
};


enum MonthOfYear
{
	January = 1, February, March, April, May, June, July, August, September, October, November, December
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);


	/// 01.05.2025

	typedef long double LD;

	/*int iter = 100000;
	LD S = 0, x = 0;
	for (size_t i = 0; i < iter; i++)
	{
		x += PI / iter;
		LD y = sin(x);
		S += y * PI / iter;
	}
	cout << S << endl;*/


	/*int iter = 10000000;
	LD S = 0, x = 0;
	for (size_t i = 0; i < iter; i++)
	{
		x += 1. / iter;
		LD y = sqrt(1-x*x);
		S += y * 1 / iter;
	}
	cout << setprecision(40) << S*4 << endl;*/

	

	/*все двузначные числа, обладающие следующим свойством :
	если к сумме цифр числа прибавить квадрат этой суммы, то
		получится снова искомое число.*/

	for (size_t i = 10; i < 100; i++)
	{
		int s = i / 10 + i % 10;
		if (s * s + s == i)
			cout << i << endl;
	}

	
	
	/*Найти все трехзначные числа, чьи квадраты оканчиваются тремя
	цифрами, которые и составляют искомые числа;*/

	//for (size_t i = 100; i < 1000; i++)
	//{
	//	if (i * i % 1000 == i)
	//		cout << i * i << " = " << i << endl;
	//}

	//1 + a + a^2 + ... + a^n

	/*float a , b;
	cin >> a;
	int n;
	cin >> n;
	float s = 1;
	b = a;
	for (size_t i = 0; i < n; i++)
	{
		s += b;
		b *= a;
	}
	cout << s << endl;*/

	/*for (int i = 0, j = 10; i < 20 && j < 0; i += 2, j--)
	{
		continue;
		cout << i << endl;
	}*/

	/*Дано вещественное число — цена 1 кг конфет.Вывести стоимость 0.1,
	0.2, ..., 1 кг конфет.*/

	/*float a;
	cin >> a;
	for (int i = 1; i <= 10; i++)
	{
		cout << i/10. << " " << a * i/10 << endl;
	}*/

	/*Дано целое число N(> 1).Вывести наименьшее из целых чисел K,
	для которых сумма 1 + 2 + ... + K будет больше или равна N, и саму эту
	сумму.*/


	/*int n;
	cin >> n;
	int k = 0;
	int s = 0;

	while (s < n)
	{
		s += ++k;
	}
	cout << k << endl;
	cout << s << endl;*/


	/*Дано целое число N(> 1).Найти наибольшее целое число K, при ко -
	тором выполняется неравенство 3^K < N.*/




	/*Подготовьте фрагмент программы, в котором должны
	вводиться 10 чисел.Если будет введено число 0, ввод должен пре -
	кратиться.*/

	//srand(time(0));

	/*int a, i = 0;
	do
	{
		a = rand() % 11;
		i++;
		cout << a << " ";
		if (a == 0)
			break;
	} while (a != 10);*/



	/*Дано натуральное число.Определить номер цифры 3
	в нем, считая от конца числа.Если такой цифры нет, ответом
	должно быть число 0, если таких цифр в числе несколько – дол -
	жен быть определен номер самой правой из них.*/


	/*int a, i = 1;
	cin >> a;
	while (a % 10 != 3)
	{
		i++;
		a /= 10;
	}
	cout << i << endl;*/


	/*Дано натуральное число.Определить, какая цифра встре -
	чается в нем чаще : 0 или 9.*/

	

	/*int a;
	int sum = 0;
	cin >> a;


	while (a != 0) 
	{
		sum += a % 10;
		a /= 10;
	}
	cout << sum;*/





	/*int a = 1;

	while (a <= 10)
	{
		cout << a++ << " ";
	}

	do
	{

	} while (true);*/


	/*int a, b, c, max;
	cin >> a >> b >> c;
	if (a > b && a > c)
	{
		max = a;
	}
	else if (b > c)
	{
		max = b;
	}
	else
	{
		max = c;
	}*/



	// (condition) ? oper1 : oper 2

	/*(a > b) ? max = a : max = b;

	max = (a > b) ? a : b;

	max = (a > b && a > c) ? a : (b > c) ? b : c;

	cout << ((a > b) ? a : b) << endl;*/


	/*Даны два целых числа : D(день) и M(месяц), определяющие правиль -
	ную дату.Вывести знак Зодиака, соответствующий этой дате : «Водолей»
	(20.1–18.2), «Рыбы»(19.2–20.3), «Овен»(21.3–19.4), «Телец»(20.4–20.5),
	«Близнецы»(21.5–21.6), «Рак»(22.6–22.7), «Лев»(23.7–22.8), «Дева»
	(23.8–22.9), «Весы»(23.9–22.10), «Скорпион»(23.10–22.11), «Стрелец»
	(23.11–21.12), «Козерог»(22.12–19.1).*/



	/*Мастям игральных карт присвоены порядковые номера : 1 — пики,
	2 — трефы, 3 — бубны, 4 — червы.Достоинству карт, старших десятки,
	присвоены номера : 11 — валет, 12 — дама, 13 — король, 14 — туз.Даны
	два целых числа : N — достоинство(6 ≤ N ≤ 14) и M — масть карты
	(1 ≤ M ≤ 4).Вывести название соответствующей карты вида «шестерка бу -
	бен», «дама червей», «туз треф» и т.п.*/



	/*DayOfWeek day = Wednesday;
	if (day == DayOfWeek::Saturday)
	{

	}*/

	/*int a;
	cin >> a;
	switch (a)
	{
	case December: case January: case February: cout << "Winter" << endl; 	break;
	case March:	   case April:	 case May:      cout << "Spring" << endl; 	break;
	case June:
		cout << "Summer" << endl;
		break;
	case July:
		cout << "Summer" << endl;
		break;
	case August:
		cout << "Summer" << endl;
		break;
	case September:
		cout << "Autumn" << endl;
		break;
	case October:
		cout << "Autumn" << endl;
		break;
	case November:
		cout << "Autumn" << endl;
		break;
	default:
		break;
	}*/


	/*int a, b, res;
	char op;
	cin >> a >> op >> b;
	switch (op)
	{
	case '+': res = a + b; break;
	case '-': res = a - b; break;
	case '*':
		res = a * b;
		break;
	case '/':
		res = a / b;
		break;
	default:
		cout << "Not operation" << endl;
	}
	cout << res << endl;*/


	/*if (op == '+')
	{
		res = a + b;
	}
	else if (op == '-')
	{
		res = a - b;
	}
	else if (op == '*')
	{
		res = a * b;
	}
	else if (op == '/')
	{
		res = a / b;
	}*/
	//cout << res << endl;

	/// 26.04.2025


	/*int a, b, c;
	cin >> a >> b >> c;

	if (a > b && a > c)
		cout << a << endl;
	else if (b > c)
		cout << b << endl;
	else
		cout << c << endl;*/


	//Написать программу учёта денежной скидки в зависимости от суммы.
	// Если покупатель приобрел товара на сумму больше 100 гривен, то 
	// скидка 5 %, более 500грн.– 10 %, более 1000грн – 25 % .Приложение 
	// должно выдать сумму, которую должен уплатить покупатель и размер 
	// скидки в%, которую он получил.

	/*int a, b;
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
	cout << a - a / 100. * b << endl;*/



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



	/*Даны три целых числа : A, B, C.Проверить истинность высказыва -
	  ния : «Ровно одно из чисел A, B, C положительное».*/

	  /*int a, b, c;
	  cin >> a;
	  cin >> b;
	  cin >> c;
	  bool r = (a > 0) + (b > 0) + (c > 0) == 1;*/



	  /*Даны целые числа a, b, c, являющиеся сторонами некоторого тре -
		  угольника.Проверить истинность высказывания : «Треугольник со сторо -
		  нами a, b, c является прямоугольным».*/

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
		  cout << "Мене звати Сергій" << endl;

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