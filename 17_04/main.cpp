#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

enum Color {
	Black = 0,
	Blue = 1,
	Green = 2,
	Aqua = 3,
	Red = 4,
	Purple = 5,
	Yellow = 6,
	White = 7,
};

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void task_1() {
	cout << "Name\t:";
	SetConsoleTextAttribute(hConsole, Yellow);
	cout << " \"The war and the peace\"" << endl;
	SetConsoleTextAttribute(hConsole, White);
	cout << "Avtor\t:   L.N. Tolstoj" << endl;
	cout << "Izdatelstvo:  Piter" << endl;
	cout << "Pages\t:";
	SetConsoleTextAttribute(hConsole, Purple);
	cout << " 500" << endl;
	SetConsoleTextAttribute(hConsole, White);
}

void task_2() {
	SetConsoleTextAttribute(hConsole, Yellow);
	cout << "\"U lukomor'a dub zelenij,\nZlataya zep na dupe tom,\nI dnem i nochju kot uchenij\nvse hodit po cepi krugom\"" << endl;
	SetConsoleTextAttribute(hConsole, White);
}

void task_3() {
	string a;
	for (int i = 0; i < 87; i++) {
		a += (char)205;
	}
	cout << (char)201 << a << (char)187 << endl;
	cout << (char)186 << setw(48) << "Vremena goda" << setw(40) << (char)186 << endl;
	a = "";
	for (int i = 0; i < 21; i++) {
		a += (char)205;
	}
	cout << (char)204 << a << (char)203 << a << (char)203 << a << (char)203 << a << (char)185 << endl;
	cout << (char)186 << "       Zima          " << (char)186 << "        Vesna        " << (char)186 << "         Leto        " <<  (char)186 << "        Osen         " << (char)186 << endl;
	cout << (char)200 << a << (char)202 << a << (char)202 << a << (char)202 << a << (char)188 << endl;
}

int main() {
	cout << "Task 1:" << endl;
	task_1();
	cout << endl;
	cout << "Task 2:" << endl;
	task_2();
	cout << endl;
	cout << "Task 3:" << endl;
	task_3();
	cout << endl;

	return 0;
}