/*
Лукашевич Артём П43021
вариант
*/
#include <iostream>
using namespace std;
/*3. Составьте программу для вычисления числа дней в месяце по введенному номеру месяца. */
int main() {
	setlocale (LC_ALL, "Russian");
	int x, x2, x3, x4, x5, x6, x7, x8, x9,  x10, x11, x12;
	cin >> x;
	x == 31;

	if (x == 1) cout  << "январь 31\n";
	if (x == 2) cout  << "февраль 28\n";
	if (x == 3) cout  << "март 31\n";
	if (x == 4) cout  << "апрель 30\n";
	if (x == 5) cout  << "май 31\n";
	if (x == 6) cout  << "июнь 30\n";
	if (x == 7) cout  << "июль 31\n";
	if (x == 8) cout  << "август 31\n";
	if (x == 9) cout  << "сентябрь 30\n";
	if (x == 10) cout  << "октябрь 31\n";
	if (x == 11) cout  << "ноябрь 30\n";
	if (x == 12) cout  << "декабрь 31\n";
	return 0;
}

