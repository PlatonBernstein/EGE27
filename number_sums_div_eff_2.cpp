#include <iostream>
using namespace std;

/*
1. Input sequence, till -9999 found
2. Calculate pairs for numbers greater than 40
3. Calcualte pairs for other numbers
4. Calculate pairs for numbers, which divide by 40
*/

const long divider = 40;
const long maxx = 40;


int main()
{
    long long t;
    long long count_total = 0, count_g_g = 0, count_g_le = 0, count_le_g = 0;
    long i, j;
    long long* entered_quantity_g = new long long [divider]; // Сколько введено чисел с таким остатом от деления, и больше 40
    for (j = 0; j < divider; j++) {
        entered_quantity_g[j] = 0;
    }
    long long* entered_quantity_le = new long long[divider]; // Сколько введено чисел с таким остатком от деления, и не больше 40
    for (j = 0; j < divider; j++) {
        entered_quantity_le[j] = 0;
    }
    // Ввод очередного x
    for(;;) {
        cin >> t;
        if (t == -9999) {
            break;
        }
        bool g = (t > maxx);
        t = t % divider;
        if (g) {
            entered_quantity_g[t] ++;
        }
        else {
            entered_quantity_le[t] ++;
        }
    }
    return 0;
}
