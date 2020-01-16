#include "Taxi.h"
using namespace std;

void Taxi::set_kilometrage(int kilometrage)
{
	Taxi::kilometrage = kilometrage;
	return;
}

void Taxi::calculate()
{
	cost = kilometrage * tariff;
	return;
}

string Taxi::choose_car()
{
	return drivers_names[rand() % 9] + " on " + car_colors[rand() % 9] + " " + car_models[rand() % 9];
}