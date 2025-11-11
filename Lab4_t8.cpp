#include <iostream>
using namespace std;

int sqr(double a, double b, double c, double* x1, double* x2);

int main()
{
    double a, b, c, x1, x2, result;
    cout << "введите a ";
    cin >> a;
    cout << "введите b ";
    cin >> b;
    cout << "введите c ";
    cin >> c;

    result = sqr(a, b, c, &x1, &x2); //определение кол-ва корней и их потенциальных значений 

    if (result == 2) cout << "\nкорни уравнения: x = " << x1 << "\tх = " << x2;
    else if (result == 1) cout << "\nуравнение имеет 1 корень: х = " << x1;
    else cout << "\nуравнение не имеет корней";
}

int sqr(double a, double b, double c, double* x1, double* x2) {
    if (((b * b - 4 * a * c) < 0)) {
        return 0;
    }
    else if (((b * b - 4 * a * c) == 0)) {
        *x1 = ((-1 * b + sqrt(b * b - a * c * 4)) / (2 * a));
        return 1;
    }
    else {
        *x1 = ((-b + sqrt(b * b - a * c * 4)) / (2 * a));
        *x2 = ((-b - sqrt(b * b - a * c * 4)) / (2 * a));
        return 2;
    }

}