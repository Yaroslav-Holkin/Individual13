

#include <iostream>

using namespace std;

// Индивидуальная задача номер 13

float Algorithm() {

	// параметры циклов
	int n, m;

	// коэффициенты
	float a, b, c;

	// слагаемые, результат
	float summ = 0, prod = 1, y;

	// блок ввода значений
	cout << "input n,m: ";
	cin >> n >> m;
	cout << endl << "input a,b,c: ";
	cin >> a >> b >> c;
	cout << endl;

	// переменные для цикла суммы
	int factork = 1;
	float bpow = b * b;

	for (int k = 1; k <= n; k++) {
		factork *= k;
		bpow *= b;
		summ += factork + bpow;
	}

	// значения для цикла произведения
	int factorj = 1;

	for (int j = 1; j <= m; j++) {
		factorj *= (j + 1);
		prod *= factorj * c + 2;
	}

	y = a * (summ + prod);

	cout << "y result: " << y << endl;

	return y;
}

int main() {
	//======== Тест номер 1 =========
	// 
	// вводимые значения : 3 3 , 3 3 3
	// верный ответ : 36 600

	cout << "====== Test #1 ======" << endl;
	cout << "input values: 3 3, 3 3 3" << endl;
	cout << "correct result: 36 600" << endl;

	// ответ программы:
	Algorithm(); // 36600
	cout << "End" << endl << endl;

	


	//======== Тест номер 2 =========
	// 
	// вводимые значения : 2 2 , 2 2 2
	// верный ответ : 222

	cout << "====== Test #2 ======" << endl;
	cout << "input values: 2 2, 2 2 2" << endl;
	cout << "correct result: 222" << endl;

	// ответ программы:
	Algorithm();//222
	cout << "End" << endl << endl;




	//======== Тест номер 3 =========
	// 
	// вводимые значения : 1 3 , 1 1 3
	// верный ответ : 11 842

	cout << "====== Test #3 ======" << endl;
	cout << "input values: 1 3, 1 1 3" << endl;
	cout << "correct result: 11842" << endl;

	// ответ программы:
	Algorithm();//11842
	cout << "End" << endl << endl;

	return 0;
}





