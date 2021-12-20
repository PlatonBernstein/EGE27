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
    // Теперь посчитаем общее количество таких пар
    for (i = 0; i < divider; i++) {
        j = divider - i;
        if (j < divider) {
            int plus_g_g = 0;
            if (i != j) {
                // Если остатки от чисел больше 40 разные
                plus_g_g = entered_quantity_g[i] * entered_quantity_g[j];
            }
            else if (entered_quantity_g[i] > 1) {
                // Если остатки от чисел больше 40 одинаковые - надо учесть возможность того, что число "сложилось" само с собой
                // например - два числа, 60 и 60, имеют сумму 120, делящуюся на 40
                plus_g_g = entered_quantity_g[i] * (entered_quantity_g[i] - 1);
            }
            count_g_g += plus_g_g;
            count_g_le += entered_quantity_g[i] * entered_quantity_le[j];
            count_le_g += entered_quantity_le[i] * entered_quantity_g[j];
        }
    }
    count_total = count_g_g + count_g_le + count_le_g;
    count_total /= 2;
    // не забываем счётчик чисел, которые сами по себе делятся нацело на 40
    int qg = entered_quantity_g[0];
    int qle = entered_quantity_le[0];
    if (qg > 0) {
        count_total += (qg * (qg - 1)) / 2;
        count_total += (qg * qle);
    }
    // Готово
    cout << count_total;
    return 0;
}
