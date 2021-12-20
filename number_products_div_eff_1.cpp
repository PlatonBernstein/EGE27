#include <iostream>

/*
1. Input array size and numbers
2. How many numbers divide by 14?
3. How many numbers divide by 2, but not by 7?
4. How many numbers divide by 7, but not by 2?
5. Calculate total count
*/

int main()
{
    long long n, count;
    long long i;
    // Ввод размера массива
    std::cin >> n;
    count = 0;
    long long* x = new long long[n];
    // Ввод всех х
    for (i = 0; i < n; i++) {
        std::cin >> x[i];
    }
    // 1. Сколько чисел уже делится на 14?
    long long div14 = 0;
    for (i = 0; i < n; i++) {
        if (x[i] % 14 == 0) {
            div14++;
        }
    }
    // 2. Сколько чисел делится на 2 и не делится на 7?
    long long div2 = 0;
    for (i = 0; i < n; i++) {
        if (x[i] % 2 == 0 and x[i] % 7 != 0) {
            div2++;
        }
    }
    // 3. Сколько чисел делится на 7 и не делится на 2?
    long long div7 = 0;
    for (i = 0; i < n; i++) {
        if (x[i] % 7 == 0 and x[i] % 2 != 0) {
            div7++;
        }
    }
    count += div2 * div7 + div14 * div2 + div14 * div7 + div14 * (n - div14 - div2 - div7) + div14 * (div14 - 1) / 2;
    // Готово!
    std::cout << count;
    return 0;
}
