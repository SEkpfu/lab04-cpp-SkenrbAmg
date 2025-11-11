#include <iostream>
using namespace std;

void a();
void b();
void c();
void d();

int main()
{
	d();
}

void a() {
	for (int i = 0; i < 4; i++) cout << "****\n";
}

void b() {
	int n{ 0 };
	cout << "введите n: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int p = 0; p < n; p++) cout << "*";
		cout << "\n";
	}
}

void c() {
	int n{}, m{};
	cout << "введите n: ";
	cin >> n;
	cout << "введите m: ";
	cin >> m;
	for (int i = 0; i < n; i++) {
		for (int i{ 0 }; i < m; i++) cout << " ";
		for (int p = 0; p < n; p++) cout << "*";
		cout << "\n";
	}
}

void d() {
	int n{}, m{};
	cout << "введите n: ";
	cin >> n;
	cout << "введите m: ";
	cin >> m;
	for (int i{ 0 }; i < n; i++) {			// 1 итерация = 1 строка
		if (i % 2 == 0) {					//отвечает за зеркальность клеток
			for (int p{ 0 }; p < m; p++) {  //формирование клеток
				for (int r{ 0 }; r < m * n; r++) {
					if (((r / m) % 2) == 0) cout << "* "; // посимвольный вывод
					else cout << "  ";
				}
				cout << endl;
			}
		}
		else {
			for (int p{ 0 }; p < m; p++) {
				for (int r{ 0 }; r < m * n; r++) {
					if (((r / m) % 2) == 0) cout << "  ";
					else cout << "* ";
				}
				cout << endl;
			}
		}
	}
}