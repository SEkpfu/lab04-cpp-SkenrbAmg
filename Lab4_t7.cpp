#include <iostream>
using namespace std;

double F(double c);
double K(double c);
void input(double& tk, double& tf, double c);

int main()
{
	double tc1, tc2;
	cout << "введите 1-е значение температуры в °С: ";
	cin >> tc1;
	cout << "\nвведите 2-е значение температуры в °С: ";
	cin >> tc2;

	cout << "\nпервое значение температуры в °F: " << F(tc1);
	cout << "\nпервое значение температуры в °К: " << K(tc1);

	double tk = 0.0, tf = 0.0;
	input(tk, tf, tc2);
	cout << "\nпервое значение температуры в °F: " << tf;
	cout << "\nвторое значение температуры в °К: " << tk;

}

double F(double c) {
	return (9 / 5.0 * c + 32);
}

double K(double c) {
	return (c + 273);
}

void input(double& tk, double& tf, double c) {
	tk = (c + 273);
	tf = (9 / 5.0 * c + 32);
}