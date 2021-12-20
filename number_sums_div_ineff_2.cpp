#include <iostream>
using namespace std;

/*
1. Input array size and content
2. Calculate checksum
*/

const int divider = 40;
const int maxx = 40;

int main()
{
    int n = 0, checksum = 0;
    int i, j, s;
    bool checksum_found = false;
    int* x = new int[1000000];
    // Ввод всех х
    for (;;) {
        std::cin >> x[n];
        if (x[n] == -9999) {
            break;
        }
        n++;
    }
    // Вычисляем
    for (i = 0; i < n; i ++) {
        for (j = i + 1; j < n; j ++) {
            s = x[i] + x[j];
            if (s % divider == 0 && (x[i] > maxx || x[j] > maxx)) {
                checksum ++;
            }
        }
    }
    // Выводим
    cout << checksum;
    return 0;
}
