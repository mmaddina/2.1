﻿// 2.1 Лаба.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string> 

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	//** Задание 1

	/*
	int a = 0;
	int i=0;
	int sum = 0;
	while (true)
	{
		cout << "Input positive integer number:";
		cin >> a;
		if (a >= 0)
		{
			break;
		}
		else
		{
			cout  << "Wrong number!"  << endl;
		}
	}
	*/

	//** Задание 2

	/*
	int a = 0;
	cout << " Введите число: ";
	cin >> a;
	int sum = 0;

	for (int i = 1; i <= a; i++)
	{
		sum = sum + i;
	}
	cout << " Результат: " << sum;
	*/

	//** Задание 3 и 4

	/*
	int nums[10] = {12, 50, 34, 16, 37, 39, 4, 27, 15, 35};
	for ( int i = 0; i <= 9; i++)
	{
		cout << nums[i] << " ";
	}
	*/

	//** Задание 5

	/*
	int nums[10] = {12, 50, 34, 16, 37, 39, 4, 27, 15, 35};
	for (int i = 0; i <= 9; i++)
	{
		if (i % 2 == 0)
		{
			cout << nums[i] << " ";
		}
	}
	*/

	//** Задание 6

	/*
	int nums[10] = {12, 50, 34, 16, 37, 39, 4, 27, 15, 35};
	int sum = 0;
	for (int i = 1; i <= 9; i++)
	{
		if (i % 2 == 1)
		{
			cout << nums[i] << " ";
			sum = sum + nums[i];
		}

	}
	cout << "\n" << "Результат суммы нечетных позиций массива: " << sum << "\n";
	return 0;

	*/
}






// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
