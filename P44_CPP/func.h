#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;

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


int sum(int a, int b)
{
	int c = a + b;
	return c;
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

void fillArray(int arr[], int size, int min = 0, int max = 9)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % (max - min + 1) + min;
	}
}

void printArray(int arr[], int size)
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


void bubbleSort(int arr[], int size)
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

void hill(int arr[], int temp[], int size)
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