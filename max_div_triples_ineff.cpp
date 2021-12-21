#include <iostream>
using namespace std;

/*
1. Ввод чисел
2. Вывод чисел
3. Вывод пар
4. Вывод троек
5. Вывод только подходящих троек
6. Подсчёт подходящих троек
*/

int main()
{
	long long n, i, j;
    // Ввод размера массива
    cin >> n;
    long long* x = new long long[n];
    // Ввод всех х
    for (i = 0; i < n; i++) {
        cin >> x[i];
    }
	for (i = 0; i < n; i++) {
		for (j = i + 1; j < n; j++) {
			cout << x[i] + x[j] << endl;
		}
    }
    return 0;
}
