#include <iostream>
using namespace std;

/*
1. Input array size and content
2. Fill buffer - input first 6 numbers
3. Move buffer & calculate
4. Calculate in reminder of buffer - last 5 pairs
*/

int main()
{
    long long n, count;
    long long i, j;
    count = 0;
    // Ввод размера массива
    cin >> n;
    long long* x = new long long[6];
    // Ввод шести x
    for (i = 0; i < 6; i++) {
        cin >> x[i];
    }
    for (i = 6; i < n; i++) {
        for (j = 1; j < 6; j++) {
            if ((x[0] + x[j]) % 31 == 0) {
                count += 1;
            }
        }
        x[0] = x[1];
        x[1] = x[2];
        x[2] = x[3];
        x[3] = x[4];
        x[4] = x[5];
        cin >> x[5];
    }
    if ((x[0] + x[1]) % 31 == 0 or (x[0] + x[2]) % 31 == 0 or (x[0] + x[3]) % 31 == 0 or (x[0] + x[4]) % 31 == 0 or (x[0] + x[5]) % 31 == 0)
        count += 1;
    if ((x[1] + x[2]) % 31 == 0 or (x[1] + x[3]) % 31 == 0 or (x[1] + x[4]) % 31 == 0 or (x[1] + x[5]) % 31 == 0)
        count += 1;
    if ((x[2] + x[3]) % 31 == 0 or (x[2] + x[4]) % 31 == 0 or (x[2] + x[5]) % 31 == 0)
        count += 1;
    if ((x[3] + x[4]) % 31 == 0 or (x[3] + x[5]) % 31 == 0)
        count += 1;
    if ((x[4] + x[5]) % 31 == 0)
        count += 1;
    cout << count;
    return 0;
}
