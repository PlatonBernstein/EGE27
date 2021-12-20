#include <iostream>
using namespace std;

/*
1. Input sequence
2. Calculate pairs for each of 4 slices/streams, having different modulus
3. Add number of pairs for each of 4 slides/streams, having same modulus
*/

const long divider = 39;
const long dist = 4;

int main()
{
    long long n;
    long long count_total = 0;
    long i, j, t;
    long long** entered_quantity = new long long* [dist]; // Сколько у нас возможно "линий" в вводимых данных
    for (i = 0; i < dist; i++) {
        entered_quantity[i] = new long long[divider]; // Сколько введено чисел с таким вот остатком от деления
        for (j = 0; j < divider; j++) {
            entered_quantity[i][j] = 0;
        }
    }
    // Ввод размера массива
    cin >> n;
    // Ввод очередного x
    for (i = 0; i < n; i++) {
        cin >> t;
        t = t % divider;
        entered_quantity[i % dist][t]++;  // накрутили счётчик остатков от деления
    }
    // Теперь посчитаем общее количество таких пар
    for (int d = 0; d < dist; d++) {
        for (i = 0; i < divider; i++) {
            j = divider - i;
            if (j < divider and i != j) {
                count_total += entered_quantity[d][i] * entered_quantity[d][j];
            }
        }
    }
    count_total /= 2;
    return 0;
}
