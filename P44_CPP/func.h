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
/// ¬ив≥д масиву на екран
/// </summary>
/// <typeparam name="T">“ип масиву</typeparam>
/// <param name="arr">- масив</param>
/// <param name="size">- розм≥р</param>
template<class T>
void printArray(T arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void printArray(char arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << endl;
}


template<class T>
void bubbleSort(T arr[], size_t size)
{
	for (size_t i = 0; i < size-1; i++)
	{
		for (size_t j = 0; j < size-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}

void hill(int arr[], int temp[], size_t size)
{
	bubbleSort(arr, size);
	for (size_t i = 0; i < size; i++)
	{
		if(i % 2 == 0)
		{
			temp[i/2] = arr[i];
		}
		else
		{
			temp[size - 1 - i/2] = arr[i];
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
double avgArray(T arr[], size_t size)
{
	T sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return (double)sum / size;
}