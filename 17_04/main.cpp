#include <iostream>

using namespace std;

double task_1() {
	int R1, R2, R3;
	cout << "Enter a values: ";
	cin >> R1 >> R2 >> R3;

	double R0 = 1.0 / static_cast<double>(1.0 / R1 + 1.0 / R2 + 1.0 / R3);
	return R0;
}

double task_2() {
	double L;
	cout << "Enter circuit: ";
	cin >> L;

	float pi = 3.14;
	double R = L / (2 * pi);
	double S = pi * R * R;
	return S;
}

double task_3() {
	int v, t, a;
	cout << "Enter values: ";
	cin >> v >> t >> a;

	double S = v * t + ((a * (t * t)) / 2);
	return S;
}

int main() {
	cout << "Task 1:\n";
	cout << task_1() << endl;

	cout << "Task 2:\n";
	cout << task_2() << endl;
	
	cout << "Task 3:\n";
	cout << task_3() << endl;
	
	return 0;
}