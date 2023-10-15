#include<iostream>
#include<clocale>
#include<cmath>
using namespace std;

int main() {
	const double a = 0.003;
	const double b = 2.5;
	double x = 0.0;
	cin >> x;
	if (x <= -6) {
		cout << exp(x) + (x * x) << "\n";
	}
	else if (-6 < x and x <= 5) {
		cout << log(x) * abs(b * x) << "\n"; // если x<0, натуральный логарифм не будет определяться
	}
	else if (x > 5) {
		cout << (1 + a )/(1 + x)<< "\n";
	}
	return 0;
}