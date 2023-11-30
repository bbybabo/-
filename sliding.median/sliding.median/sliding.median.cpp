// sliding.median.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;
int  GetValue()
{
	int d;
	do {
		cin.clear();
		cout << "ВВедите целое значение" << endl;
		cin >> d;
	} while (!cin.good());
	return d;

}
int main()
{
	system("chcp 65001");
	system("cls");
	int w, n;
	map<int, int> input;
	map<int, double> output;
	cout << "Введите длину ряда" << endl;
	cin >> n;

	cout << "Введите ширину окна" << endl;
	cin >> w;


	cout << "Введите ряд" << endl;
	double currentSum = 0.0;
	for (int i = 0; i < n; i++)
	{
		input[i] = GetValue();
		currentSum += input[i];
		if (i >= w)
		{
			currentSum -= input[i - w];
		}
		output[i]= currentSum / 3.0;
	}
	cout << "Исходный ряд" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << input[i] << " ";
	}

	cout << endl;

	cout << "результат" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << output[i] << " ";
	}
	cout << endl;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
