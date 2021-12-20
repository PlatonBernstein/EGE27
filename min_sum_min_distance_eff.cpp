#include <iostream>
using namespace std;

/*
1. Input array size
2. Fill buffer - input first 4 numbers
3. Move buffer
4. Calculate sums
*/

int main()
{
    long long n, minnum, minsum;
    long long i;
    // Ввод размера массива
    cin >> n;
    minsum = 80000;
    minnum = 40000;
    long long* x = new long long[4];
    // Ввод четырех x
    for (i = 0; i < 4; i++) {
        cin >> x[i];
    }
    // Производим вычисления
    for (i = 4; i < n; i++) {
        if (x[0] < minnum) {
            minnum = x[0];
        }
        x[0] = x[1];
        x[1] = x[2];
        x[2] = x[3];
        cin >> x[3];
        if (x[3] + minnum < minsum) {
            minsum = x[3] + minnum;
        }
    }
    cout << minsum;
    return 0;
}
