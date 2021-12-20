#include <iostream>

/*
1. Input array size and content
2. Calculate count
*/

int main()
{
    int n, count;
    int i, j;
    // Ввод размера массива
    std::cin >> n;
    count = 0;
    int* x = new int[n];
    // Ввод всех х
    for (i = 0; i < n; i++) {
        std::cin >> x[i];
    }
}
