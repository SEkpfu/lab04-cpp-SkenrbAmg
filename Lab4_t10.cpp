#include <iostream>
using namespace std;

double s(double a, double b);
double s(double a, double b, double c);
double s(double a, double b, double c, double d);

int main()
{
    double a, b, c, d;
    cin >> a >> b;
    cout << s(a, b) << endl;
    cin >> a >> b >> c;
    cout << s(a, b, c) << endl;
    cin >> a >> b >> c >> d;
    cout << s(a, b, c, d);
}

double s(double a, double b) {
    return (a + b) / 2;
}

double s(double a, double b, double c) {
    return (a + b + c) / 3;
}

double s(double a, double b, double c, double d) {
    return (a + b + c + d) / 4;
}