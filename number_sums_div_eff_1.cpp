#include <iostream>
using namespace std;

/*
1. Input sequence length and sequence
2. Calculate maximal odd and even numbers
3. Calculate their sum and print it
*/

const int maxabs = 1000;

int main()
{
    int i, t, n;
    int maxchet = -maxabs - 1, maxnechet = -maxabs - 1;
    // Ввод количества чисел
    cin >> n;
    // Ввод очередного x
    for (i = 0; i < n; i++) {
        cin >> t;
        if (t % 2 != 0) {
            // если оно нечётное - ищем максимальное
            maxnechet = max(maxnechet, t);
        }
        else {
            // если оно чётное - ищем максимальное
            maxchet = max(maxchet, t);
        }
    }
    int checksum = -1;
    if (maxchet >= -maxabs and maxnechet >= -maxabs) {
        // были найдены и максимальное чётное, и максимальное нечётное
        checksum = maxchet + maxnechet;
    }
    cout << checksum;
    return 0;
}
