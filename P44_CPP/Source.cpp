#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<algorithm>
#include<conio.h>

#include"Timer.h"
#include"func.h"


using namespace std;



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);


	/// 24.05.2025

	//int arr[260000];

	//int a[10];

	int size = 10;
	////cin >> size;
	int* p = new int[size];
	fillArray(p, size);
	printArray(p, size);
	
	p = addElemArray(p, size++, 888);

	/*int* temp = new int[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = p[i];
	}
	temp[size] = 999;
	delete p;
	size++;
	p = temp;*/
	

	printArray(p, size);

	//p = new int;

	//delete p;

	//p = new int;

	/*char a = 5;
	char* p = &a;
	cout << sizeof(a) << endl;
	cout << sizeof(p) << endl;*/



	//int a[] = { 101,2,3,4,5 };
	//for (size_t i = 0; i < 5; i++)
	//{
	//	cout << *(a + i) << " "; // *(a + i) = a[i]
	//}
	//cout << endl;

	//for (int* i = a; i != &a[5]; i++)
	//{
	//	cout << *i << " ";
	//}
	//cout << endl;

	//int* b = a;
	//b++;

	//printArray(a, 5);

	/*cout << *(a + 0) << endl;
	cout << *(a + 1) << endl;
	cout << *(a + 2) << endl;
	cout << *(a + 3) << endl;
	cout << *(a + 4) << endl;*/



	/*int a = 5, b = 55;
	float c = 3.14;

	int* pa = &a;
	int* pb = &b;
	float* pc = &c;

	cout << (pa > pb) << endl;
	cout << (pa < pb) << endl;
	cout << (pa == pb) << endl;
	cout << (pa != pb) << endl;
	cout << (pc == nullptr) << endl;
	cout << (pc != nullptr) << endl;
	if (!pc)
	{

	}*/

	// + - ++ -- 
	// == != 

	//cout << pa << endl;
	//cout << &c << endl;
	//pa = pa + 5; // pa = pa + type * n
	//cout << pa << endl;
	//cout << *pa << endl;

	/*cout << typeid(a).name() << endl;
	cout << a << endl;
	cout << sizeof(a) << endl;
	cout << &a << endl;*/



	/*cout << pa << endl;
	cout << *pa << endl;

	*pa = 999;

	cout << a << endl;

	pa = &c;
	*pa = 111;*/


	/// 21.05.2025

	/*srand(time(0));
	const size_t size = 10;
	char arr[size];

	fillArray(arr, size, 'A', 'X');
	printArray(arr, size);*/


	/*CONSOLE_CURSOR_INFO curs = { 0 };
	curs.dwSize = sizeof(curs);
	curs.bVisible = FALSE;
	::SetConsoleCursorInfo(::GetStdHandle(STD_OUTPUT_HANDLE), &curs);


	int x = 0, y = 0;
	gotoxy(x, y);
	cout << 0;
	while (true)
	{

		if (_kbhit())
		{
			gotoxy(x, y);
			cout << " ";

			char c = _getch();
			switch (c)
			{
			case UP:
				if (y > 0) y--;
				break;
			case DOWN:
				if (y < 20) y++;
				break;
			case LEFT:
				if (x > 0) x--;
				break;
			case RIGHT:
				if (x < 80) x++;
				break;
			case ESC:
				break;
			default:
				break;
			}
			gotoxy(x, y);
			cout << 0;
		}
	}*/




	/*auto a = 9.f;
	int b;

	cout << sum(36, 57.3, 'a') << endl;

	decltype (a + b) c;*/

	/// 17.05.2025

	/*srand(time(0));
	const int size = 10;
	int arr[size], temp[size];

	fillArray(arr, size);
	printArray(arr, size);*/

	/*hill(arr, temp, size);
	printArray(temp, size);*/

	/*starLine(20, '#');
	starLine(30);
	starLine();

	cout << sum(2, 3, 4) << endl;
	cout << sum(2, 3) << endl;*/


	/*cout << endl;
	int count = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (isEven(arr[i]))
		{
			count++;
		}
	}*/

	//cout << count << endl;

	//cout << sqrt(25) << endl;

	/*int a, b;

	starLine();

	int res = sum(3, 6);
	cout << res << endl;

	cout << sum(3, 5) << endl;*/

	//cout << avg(3, 4, 6) << endl;

	/// 14.05.2025
	//srand(time(0));
	//const int row = 5, col = 5;
	//int arr[row][col];// = { 2,3,7,8,7,5,3,3, 4 };
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		arr[i][j] = rand() % 80 + 20;
	//	}
	//}

	//int maxel[row], minel[row];
	//for (size_t i = 0; i < row; i++)
	//{
	//	int mx = arr[i][0], mi = arr[i][0];
	//	for (size_t j = 1; j < col; j++)
	//	{
	//		if (arr[i][j] > mx)
	//		{
	//			mx = arr[i][j];
	//		}

	//		if (arr[i][j] < mi)
	//		{
	//			mi = arr[i][j];
	//		}

	//	}
	//	maxel[i] = mx;
	//	minel[i] = mi;
	//}
	//
	//for (size_t i = 0; i < row; i++)
	//{
	//	for (size_t j = 0; j < col; j++)
	//	{
	//		if (maxel[i] == arr[i][j])
	//		{
	//			SetColor(LightRed, Black);
	//		}
	//		if (minel[i] == arr[i][j])
	//		{
	//			SetColor(LightGreen, Black);
	//		}
	//		cout << arr[i][j] << " ";
	//		SetColor(7, Black);
	//	}
	//	cout << endl;
	//}
	//cout << endl;



	/*for (size_t i = 0; i < row-1; i++)
	{
		for (size_t j = 0; j < row-i-1; j++)
		{
			if (maxel[j] < maxel[j + 1])
			{
				swap(maxel[j], maxel[j + 1]);
				for (size_t k = 0; k < col; k++)
				{
					swap(arr[j][k], arr[j + 1][k]);
				}
			}
		}
	}*/

	/*SetColor(LightRed, Black);
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	SetColor(White, Black);*/

	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t k = 0; k < col - 1; k++)
		{
			for (size_t j = 0; j < col - 1 - k; j++)
			{
				if (arr[i][j] > arr[i][j + 1])
				{
					swap(arr[i][j], arr[i][j + 1]);
				}
			}
		}
	}*/


	/*for (size_t i = 0; i < row - 1; i++)
	{
		for (size_t k = 0; k < row - 1 - i; k++)
		{
			if (arr[k][0] < arr[k+1][0])
			{
				for (size_t j = 0; j < col; j++)
				{
					swap(arr[k][j], arr[k+1][j]);
				}
			}
		}
	}*/



	/*for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}*/


	//for (size_t j = 0; j < col; j++)
	//{
	//	int sum = 0;
	//	for (size_t i = 0; i < row; i++)
	//	{
	//		sum += arr[i][j];
	//	}
	//	cout << sum << " ";
	//}

	//srand(time(0));
	//const int size = 10;
	//int arr[size];// = { 1, 2, 3, 4, 4, 6, 7, 8, 9, 0 };

	//for (size_t i = 0; i < size; i++)
	//{
	//	arr[i] = rand() % 10;
	//	cout << arr[i] << " ";
	//}
	//cout << endl;

	//for (size_t i = 0; i < size - 1; i++)
	//{
	//	for (size_t j = 0; j < size-1-i; j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			swap(arr[j], arr[j + 1]);
	//		}
	//	}
	//}

	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;


	/// 10.05.2025

	//srand(time(0));
	//const int size = 1000;
	////int arr[size]; // = { 1, 2, 3, 4, 4, 6, 7, 8, 9, 0 };
	//int* arr = new int[size];
	//for (size_t i = 0; i < size; i++)
	//{
	//	arr[i] = rand()%10000;
	//}

	//Timer t;
	//sort(arr, arr + 250000);
	//cout << t.elapsed() << endl;

	//for (size_t i = 0; i < size; i++)
	//{
	//	cout << arr[i] << " ";
	//}
	//cout << endl;

	/*int a, count = 0;
	cin >> a;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == a)
		{
			count++;
		}
	}
	cout << count << endl;*/


	/*Дан целочисленный массив размера N.Вывести все содержащиеся в
	данном массиве четные числа в порядке убывания их индексов, а также их
	количество K.*/

	/*int count = 0;
	for (int i = size-1; i >= 0; i--)
	{
		if (arr[i] % 2 == 0)
		{
			cout << arr[i] << " ";
			count++;
		}
	}
	cout << endl << count << endl;*/

	/*Дано целое число N(> 1) и набор из N чисел.Найти номера двух
	соседних чисел из данного набора, произведение которых является мини -
	мальным, и вывести вначале меньший, а затем больший номер.*/

	/*int ii = 0, dob = arr[0] * arr[1];
	for (size_t i = 1; i < size-1; i++)
	{
		if (arr[i] * arr[i + 1] < dob)
		{
			dob = arr[i] * arr[i + 1];
			ii = i;
		}
	}
	cout << ii  << " "  << ii+1 << " " << dob << endl;*/



	/*Дано целое число N и набор из N целых чисел, содержащий только
	нули и единицы.Найти номер элемента, с которого начинается самая
	длинная последовательность одинаковых чисел, и количество элементов в
	этой последовательности.Если таких последовательностей несколько, то
	вывести номер первой из них*/

	/*int count = 1, j, cmax = 0, jmax = 0;
	for (size_t i = 0; i < size - 1; i++)
	{
		if (arr[i] == arr[i + 1])
		{
			count++;
			if (arr[i] != arr[i - 1])
			{
				j = i;
			}
			if (cmax < count)
			{
				cmax = count;
				jmax = j;
			}
		}
		else
		{
			count = 1;
		}
	}
	cout << cmax << " " << jmax << endl;*/



	/*Дан целочисленный массив размера N.Проверить, чередуются ли в
	нем четные и нечетные числа.Если чередуются, то вывести 0, если нет, то
	вывести порядковый номер первого элемента, нарушающего закономер -
	ность.*/

	/*int flag = 0;
	for (size_t i = 0; i < size-1; i++)
	{
		if (arr[i] % 2 == arr[i + 1] % 2)
		{
			flag = i+1;
			break;
		}
	}
	cout << flag << endl;*/




	/*Дан массив размера N.Поменять местами его минимальный и макси -
	мальный элементы.*/

	/*int imax = 0, imin = 0, max = arr[0], min = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			imax = i;
		}
		if (arr[i] < min)
		{
			min = arr[i];
			imin = i;
		}
	}

	swap(arr[imin], arr[imax]);

	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;*/





	/*int s = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			s++;
		}
	}
	cout << s << endl;*/

	/// 07.05.2025


	/*Найти все простые несократимые дроби, заключенные
	между 0 и 1, знаменатели которых не превышают 7 (дробь задает -
	ся двумя натуральными числами – числителем и знаменателем).*/

	//for (size_t i = 1; i < 7; i++)
	//{
	//	for (size_t j = i+1; j <= 7; j++)
	//	{

	//		if(true/* чи є спільний дільник*/)
	//			cout << i << "/" << j << endl;
	//	}
	//}


	/*Два натуральных числа называются дружественными,
	если каждое из них равно сумме всех делителей другого(само
	другое число в качестве делителя не рассматривается).Найти все
	пары натуральных дружественных чисел, меньших 50 000.*/

	/*for (size_t i = 1; i <= 5000; i++)
	{
		for (size_t j = i + 1; j <= 5000; j++)
		{
			int si = 0;
			for (size_t k = 2; k < i; k++)
			{
				if (i % k == 0)
				{
					si += k;
				}
			}

			int sj = 0;
			for (size_t k = 2; k < j; k++)
			{
				if (j % k == 0)
				{
					sj += k;
				}
			}

			if(si == j && sj == i)
				cout << i << " " << j << endl;
		}
	}*/



	//int n;
	//cin >> n; // 6

	// * * * * * *
	// * *     * *
	// *   * *   *
	// *   * *   *
	// * *     * *
	// * * * * * *

	/*for (size_t j = 0; j < n; j++)
	{
		for (size_t i = 0; i < n; i++)
		{
			if (j != 0 && j != n - 1 && i != 0 && i != n - 1 && i != j && i != n - 1 - j)
			{
				cout << "  ";
			}
			else
			{
				cout << "* ";
			}
		}
		cout << endl;
	}*/


	/*Найти все целые числа из промежутка от 100 до 300, у ко -
	торых сумма делителей равна 50.*/


	//for (size_t j = 100; j <= 1000; j++)
	//{
	//	int s = 0;
	//	for (size_t i = 2; i < j; i++)
	//	{
	//		if (j % i == 0)
	//		{
	//			//cout << i << " ";
	//			s += i;
	//		}

	//	}
	//	if(s == 50)
	//		cout << j << " - " << s << endl;
	//}


	/*Найти все целые числа из промежутка от 1 до 300, у ко -
	торых ровно пять делителей.*/

	//for (size_t j = 1; j <= 30000; j++)
	//{
	//	int s = 0;
	//	for (size_t i = 2; i < j; i++)
	//	{
	//		if (j % i == 0)
	//		{
	//			//cout << i << " ";
	//			s++;
	//		}

	//	}
	//	if(s == 5)
	//		cout << j << " - " << s << endl;
	//}


	/*Найти натуральное число из интервала от a до b с мак -
	симальной суммой делителей.*/



	/*Составить программу нахождения цифрового корня на -
	турального числа.Цифровой корень данного числа получается
	следующим образом.Если сложить все цифры этого числа, за -
	тем все цифры найденной суммы и повторять этот процесс, то
	в результате будет получено однозначное число(цифра), которое
	и называется цифровым корнем данного числа.*/

	// 256
	// 13
	// 4

	/*int n;
	cin >> n;
	int s;
	while (n > 9)
	{
		s = 0;
		while (n > 0)
		{
			s += n % 10;
			n /= 10;
		}
		n = s;
	}
	cout << s << endl;

	cout << 1 + (n - 1) % 9 << endl;*/






	/// 01.05.2025

	//typedef long double LD;

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

		/*for (size_t i = 10; i < 100; i++)
		{
			int s = i / 10 + i % 10;
			if (s * s + s == i)
				cout << i << endl;
		}*/



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