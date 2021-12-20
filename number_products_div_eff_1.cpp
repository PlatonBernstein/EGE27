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
    return 0;
}
