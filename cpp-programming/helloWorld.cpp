#include <iostream>

using namespace std;

int main(void) {
  cout << "Hello World!";
	int number = 6;

	int a = 10;
	float b = 20.22;
	double c = a + b;

	cout << number << endl;
	cout << "c" << c << endl;

	// 常量
	const int d = 100;

	const float pi = 3.14159;
	// pi = 3.14; // 常量不可以被修改，会报错

	int a, b;
	cin >> a >> b;

	cout << "输入: a: "<< a << "b: " << b << endl;
	cout << "常量pi: " << pi << endl;

	cout << "常量d: " << d << endl;
	system("pause");
  return 0;
}