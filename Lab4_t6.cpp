#include <iostream>
#include <string>
using namespace std;

string enterNumber(int n);
string sing(int n);

int main() {
    cout << "введите число из интервала [-10; 10] ";
    int n;
    cin >> n;
    if (enterNumber(n) == "неверное число") cout << enterNumber(n);
    else cout << sing(n) << enterNumber(n);
}

string sing(int n) {
    if (n > 0) return " + ";
    if (n == 0) return "";
    else return " - ";
}

string enterNumber(int n) {
    switch (abs(n)) {
    case 0: return "ноль";
    case 1: return "один";
    case 2: return "два";
    case 3: return "три";
    case 4: return "четыре";
    case 5: return "пять";
    case 6: return "шесть";
    case 7: return "семь";
    case 8: return "восемь";
    case 9: return "девять";
    case 10: return "десять";
    default: return "неверное число";
    }
}
