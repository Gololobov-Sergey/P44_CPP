#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;

enum DIRECTION
{
	UP = 72, DOWN = 80, LEFT = 75, RIGHT = 77, ESC = 27
};


void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

enum Color
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
}


const long double PI = 3.141592653589793238462643383279502884L;


enum DayOfWeek
{
	Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday, NoDay = -1
};


enum MonthOfYear
{
	January = 1, February, March, April, May, June, July, August, September, October, November, December
};


// type name(param)
// {
//	 body;
// }

void starLine(int count = 20, char symbol = '*')
{
	for (size_t i = 0; i < count; i++)
	{
		cout << symbol;
	}
	cout << endl;
}

template<class T1, class T2, class T3>
auto sum(T1 a, T2 b, T3 c) -> decltype(a + c)
{
	return a + b + c;
}


int sum(int a, int b, int c)
{
	int d = a + b + c;
	return d;
}


float avg(int a, int b, int c)
{
	return (a + b + c) / 3.f;
}

bool isEven(int a)
{
	return a % 2 == 0;
}

template<class T>
void fillArray(T arr[], size_t size, T min = 0, T max = 9)
{
	for (auto i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

void fillArray(float arr[], size_t size, float min = 0, float max = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		float f = rand() % 10000 / 10000.;
		arr[i] = rand() % (int)(max - min + 1) + min + f;
	}

}

/// <summary>
/// Вивід масиву на екран
/// </summary>
/// <typeparam name="T">Тип масиву</typeparam>
/// <param name="arr">- масив</param>
/// <param name="size">- розмір</param>
template<class T>
void printArray(T* arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printArray(char* arr, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
}


bool asc(int a, int b)
{
	return a > b;
}

bool desc(int a, int b)
{
	return a < b;
}

bool lastNumber(int a, int b)
{
	if (a % 10 > b % 10)
	{
		return true;
	}
	else if (a % 10 < b % 10)
	{
		return false;
	}
	else
	{
		return desc(a, b);
	}
}



template<class T>
void bubbleSort(T* arr, size_t size, bool(*method)(T, T) = asc)
{
	for (size_t i = 0; i < size - 1; i++)
	{
		bool flag = false;
		for (size_t j = 0; j < size - 1 - i; j++)
		{
			if (method(arr[j], arr[j + 1]))
			{
				swap(arr[j], arr[j + 1]);
				flag = true;
			}
		}
		if (!flag)
			break;
	}
}

void hill(int arr[], int temp[], size_t size)
{
	bubbleSort(arr, size);
	for (size_t i = 0; i < size; i++)
	{
		if (i % 2 == 0)
		{
			temp[i / 2] = arr[i];
		}
		else
		{
			temp[size - 1 - i / 2] = arr[i];
		}
	}

}


template<class T>
T sumArray(T arr[], size_t size)
{
	T sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<class T>
int findArray(T arr[], size_t size, T key)
{
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}


template<class T>
int rfindArray(T arr[], size_t size, T key)
{
	for (int i = size - 1; i >= 0; i--)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}
	return -1;
}

template<class T>
double avgArray(T* arr, size_t size)
{
	T sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return (double)sum / size;
}


template<class T>
T maxArray(T* arr, size_t size)
{
	T max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}


double maxArray(int* arr, size_t size)
{
	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

double minArray(int* arr, size_t size)
{
	int min = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}





template<class T>
void addElemArray(T*& arr, size_t& size, T elem)
{
	T* temp = new T[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = elem;
	delete arr;
	size++;
	arr = temp;
}


void my_swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;

	cout << a << " " << b << endl;
}

//void newArray(int*& arr, int size)
//{
//	arr = new int[size];
//	fillArray(arr, size);
//	printArray(arr, size);
//}


// delElemArray(arr, size)
// insertArray(arr, size, elem, pos)
// removeArray(arr, size, pos)


template<class T>
void margeArrays(T* arr1, size_t size1, T* arr2, size_t size2, T*& arr3, size_t& size3)
{
	size3 = size1 + size2;
	arr3 = new T[size1 + size2];
	for (size_t i = 0; i < size1; i++)
	{
		arr3[i] = arr1[i];
	}
	for (size_t i = 0; i < size2; i++)
	{
		arr3[i + size1] = arr2[i];
	}
}


double Action(int* arr1, size_t size1, int* arr2, size_t size2, double(*method)(int*, size_t))
{
	size_t size3;
	int* arr3 = nullptr;
	margeArrays(arr1, size1, arr2, size2, arr3, size3);

	return method(arr3, size3);
}

template<class T>
void deleteElemArray(T*& arr, size_t& size)
{
	T* temp = new T[size - 1];
	for (size_t i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}
	delete arr;
	size--;
	arr = temp;
}

void delValueArray(int*& arr, size_t& size, bool isEven = true)
{
	size_t newSize = 0;
	int* temp = nullptr;
	if (isEven)
	{
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] % 2 == 0)
				newSize++;
		}
		temp = new int[newSize];
		newSize = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] % 2 == 0)
				temp[newSize++] = arr[i];
		}
	}
	else
	{
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] % 2 != 0)
				newSize++;
		}
		temp = new int[newSize];
		newSize = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] % 2 != 0)
				temp[newSize++] = arr[i];
		}
	}

	delete arr;
	size = newSize;
	arr = temp;
}

template<class T>
void bublik(T*& arr, size_t size, int& sum, int& dobutok)
{
	sum = 0, dobutok = 1;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
		dobutok *= arr[i];
	}

}


void hello()
{
	cout << "Hello" << endl;
}

void hello1()
{
	cout << "Hello1" << endl;
}


void gun(int* bullet)
{
	cout << "->" << endl;
	bullet[0]--;
}

void mashineGun(int* bullet)
{
	cout << "-> -> -> -> ->" << endl;
	bullet[1] -= 5;
}

void arrow(int* bullet)
{
	cout << ">>------>" << endl;
	bullet[2]--;
}


int maxArray(int* arr, int size)
{
	int imax = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > arr[imax])
		{
			imax = i;
		}
	}
	return imax;
}

void(*selectWeapon(int* bullet))(int*)
{
	void(*weapon[])(int*) = { gun, mashineGun, arrow };

	int ind = maxArray(bullet, 3);

	return weapon[ind];
}