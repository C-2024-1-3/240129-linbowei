#include <iostream>
#include<windows.h>
using namespace std;
const double PI = 3.14159265358979323846;

int main() {
	SetConsoleOutputCP(CP_UTF8);
    double radius, height, volume;
    cout << "请输入圆锥的底半径: ";
    cin >> radius;

    cout << "请输入圆锥的高度: ";
    cin >> height;

    volume = (1.0 / 3.0) * PI * radius * radius * height;

    cout << "圆锥的体积是: " << volume << endl;

    return 0;
}