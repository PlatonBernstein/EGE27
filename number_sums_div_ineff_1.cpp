#include <iostream>
using namespace std;

/*
1. Input array size and content
2. Calculate checksum
*/

int main()
{
    int n, checksum = -1;
    int i, j, s;
    bool checksum_found = false;
    // Ввод размера массива
    std::cin >> n;
    int* x = new int[n];
    // Ввод всех х
    for (i = 0; i < n; i++) {
        std::cin >> x[i];
    }
    // Вычисляем
    for (i = 0; i < n; i ++) {
        for (j = i + 1; j < n; j ++) {
            s = x[i] + x[j];
            if (s % 2 != 0) {
                if (checksum_found) {
                    checksum = max(checksum, s);
                }
                else {
                    checksum = s;
                    checksum_found = true;
                }
            }
        }
    }
    // Выводим
    cout << checksum;
    return 0;
}
