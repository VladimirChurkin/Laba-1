#pragma once

#include <iostream>
using namespace std;
class Taxi
{
	public:
		int kilometrage;
		int cost;
		int tariff = 8;
		string driver;
		void set_kilometrage(int kilometrage);
		void calculate();
		string choose_car();
	
	private:
		string drivers_names[10] = {"Bob", "Jack", "Davie", "John", "Tom", "Steve", "Bill", "Mark", "Kliff", "Nil"};
		string car_models[10] = { "Nissan", "Toyota", "Subaru", "Mazda", "Mitsubishi", "Suzuki", "Hyundai", "Kia", "Lada", "Audi" };
		string car_colors[10] = {"green", "black", "white", "yellow", "gray", "red", "purple", "pink", "orange", "blue"};
};

