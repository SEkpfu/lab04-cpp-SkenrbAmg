#include <iostream>
using namespace std;

double dist(double x1, double x2, double y1, double y2);
double square3(double l1, double l2, double l3);
    
int main()
{
    double x1, x2, y1, y2;
    cout << "введите координаты первой точки ";
    cin >> x1 >> y1;
    cout << "введите координаты второй точки ";
    cin >> x2 >> y2;

    cout << "\nдлина отрезка, соединяющего точки: ";
    cout << dist(x1, x2, y1, y2) << endl;

    cout << "расстояние от первой точки до начала координат: ";
    cout << dist(x1, 0, y1, 0) << endl;
    cout << "расстояние от второй точки до начала координат: ";
    cout << dist(x2, 0, y2, 0) << endl;

    cout << "\nвведите координаты третьей точки ";
    double x3, y3;
    cin >> x3 >> y3;
    //вычисление длин сторон треугольника
    double len1, len2, len3, s1;
    len1 = dist(x1, x2, y1, y2);
    len2 = dist(x1, x3, y1, y3);
    len3 = dist(x2, x3, y2, y3);

    s1 = square3(len1, len2, len3);

    cout << "площадь тругольника, образуюшегося из 3-х имеющихся вершин: ";
    cout << s1;

    cout << "\n\nвведите координаты четвертой вершины ";
    double x4, y4;
    cin >> x4 >> y4;

    // вычисление площади четырехугольника, путем сложения площадей 2-х треугольников, на которые его разбивает диагональ
    // площадь первого уже известна, находим площадь второго
    double len4, len5, s2;
    len4 = dist(x2, x4, y2, y4); //отрезки от 4 точки до соседних
    len5 = dist(x3, x4, y3, y4);
    
    s2 = square3(len3, len4, len5); // площадь второго треугольника

    cout << "площадь четырехугольника, образующегося из имеющихся вершин: ";
    cout << s1 + s2;
}

double dist(double x1, double x2, double y1, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double square3(double l1, double l2, double l3) {
    double p = (l1 + l2 + l3) / 2;
    return sqrt(p * (p - l1) * (p - l2) * (p - l3));
}
