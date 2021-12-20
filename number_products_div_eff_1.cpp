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
    return 0;
}
