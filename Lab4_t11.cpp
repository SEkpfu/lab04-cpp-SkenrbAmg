#include <iostream>
using namespace std;

int s(int a, int b);
int s(int a, int b, int c); 
float s(float a, float b, float c);

int main()
{
	int n;
	cout << "сколько чисел будет введено? ";
	cin >> n;
	if (n == 3) {
		float a, b, c;
		cin >> a >> b >> c;
		cout << s(a, b, c);
	}
	else if (n == 2){
		int a, b;
		cin >> a >> b;
		cout << s(a, b);
	}
		
}

int s(int a, int b) {
	return a * b / 2;
}

int s(int a, int b, int c) {
	return (a * b * sin(c) / 2.0);
}

float s(float a, float b, float c) {
	float p = (a + b + c) / 2;
	return (sqrt(p * (p - a) * (p - b) * (p - c)));
}