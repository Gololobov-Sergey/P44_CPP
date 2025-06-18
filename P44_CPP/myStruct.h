#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;

struct Point
{
	int x, y;
	char name;

	void print()
	{
		cout << name << "(" << x << ", " << y << ")" << endl;
	}
};




double len2Point(Point p1, Point p2)
{
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}


struct Date
{
	int day;
	int month;
	int year;

	void print()
	{
		if (day < 10)
			cout << 0;
		cout << day << ".";
		if (month < 10)
			cout << 0;
		cout << month << "." << year << endl;
	}


	char* to_string()
	{
		char* str = new char[11];
		str[0] = day / 10 + 48;
		str[1] = day % 10 + 48;
		str[2] = '.';
		str[3] = month / 10 + 48;
		str[4] = month % 10 + 48;
		str[5] = '.';
		str[6] = year / 1000 + 48;
		str[7] = year / 100 % 10 + 48;
		str[8] = year / 10 % 10 + 48;
		str[9] = year % 10 + 48;
		str[10] = '\0';
		return str;
	}
};



struct Human
{
	char* name;
	Date birthDay;
};


struct Engine
{
	int cilinder = 4;

	void start()
	{
		cout << "Engine start" << endl;
	}

	void stop()
	{
		cout << "Engine stop" << endl;
	}
};

struct Car
{
	Engine engine;

	void move()
	{
		engine.start();
		cout << "Car move" << endl;
		engine.stop();
	}

	void beep()
	{
		cout << "Beep beeeep" << endl;
	}
};