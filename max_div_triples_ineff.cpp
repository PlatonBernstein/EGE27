#include <iostream>

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
	long long n, i;
    // Ввод размера массива
    std::cin >> n;
    long long* x = new long long[n];
    // Ввод всех х
    for (i = 0; i < n; i++) {
        std::cin >> x[i];
    }
    return 0;
}
