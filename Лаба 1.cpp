/*
	Напишите собственный класс, который будет содержать не менее 5 полей и 3 методов 
	(не считая конструктора и деструктора). Приведите пример использования вашего класса.
*/
#include <iostream>
#include "taxi.h"
using namespace std;

int main()
{
	Taxi taxi;
	int kilometrage;
	cout << "Enter kilometrage: ";
	cin >> kilometrage;
	taxi.set_kilometrage(kilometrage);
	taxi.calculate();
	cout << "It will costs " << taxi.cost << "$\n";
	cout << "Wait please, " << taxi.choose_car() << " is driving to you!";
}
