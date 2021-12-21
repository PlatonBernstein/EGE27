#include <iostream>
using namespace std;

/*
1. Ввод чисел
2. Вывод чисел
3. Вывод пар
4. Вывод троек
5. Вывод только подходящих троек
6. Подсчёт максимальной тройки
*/

int main()
{
	long long n, i, j, e, maxtriple;
	maxtriple = 0;
    // Ввод размера массива
    cin >> n;
    long long* x = new long long[n];
	long long* y = new long long[3];
    // Ввод всех х
    for (i = 0; i < n; i++) {
        cin >> x[i];
    }
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			for (e = j + 1; e < n; e++) {
                if ((x[i] + x[j] + x[e]) % 4 == 0 and (x[i] + x[j] + x[e]) > maxtriple) {
                    maxtriple = x[i] + x[j] + x[e];
					y[0] = x[i];
					y[1] = x[j];
					y[2] = x[e];
                }
			}
		}
    }
    cout << y[0] << endl;
	cout << y[1] << endl;
	cout << y[2] << endl;
    return 0;
}
