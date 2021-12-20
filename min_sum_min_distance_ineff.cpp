#include <iostream>

using namespace std;

/*
1. Input array size and content
2. Calculate minsum
*/

int main()
{
    long long n, minsum;
    long long i, j;
    // Ввод размера массива
    cin >> n;
    minsum = 1000;
    long long* x = new long long[n];
    // Ввод всех х
    for (i = 0; i < n; i++) {
        cin >> x[i];
    }
    // Производим вычисления
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (abs(i - j) >= 4 && x[i] + x[j] < minsum) {
                minsum = x[i] + x[j];
            }
        }
    }
    cout << minsum;
    return 0;
}
