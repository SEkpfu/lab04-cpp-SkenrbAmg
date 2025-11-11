#include <iostream>
using namespace std; 

int add(double a, double b);
int sub(double a, double b);
int mult(double a, double b);

int main()
{
    double a, b;
    cout << "введите a и b ";
    cin >> a >> b;
    cout << add(mult(5, (add(sub(a, 2), b))), mult(a, 1000));
    return 0;
}
int add(double a, double b) {
    return a + b;
}
int sub(double a, double b) {
    return a - b;
}
int mult(double a, double b) {
    return a * b;
}
