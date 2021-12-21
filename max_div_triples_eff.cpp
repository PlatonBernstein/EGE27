#include <iostream>
using namespace std;

/*
1. Объявление переменных
2. Ввод чисел и их обработка
3. Нахождение максимальной тройки
*/

int main()
{
	long long n, i, i1, i2, maxtriple;
	maxtriple = 0;
    // Ввод размера массива
    cin >> n;
	long long maxnum [4][3];
	long long ans [3];
	// Ввод очередного x
    for(i = 0; i < n; i++) {
        cin >> t;
        if (t > maxnum[t % 4][0]) {
            maxnum[t % 4][2] = maxnum[t % 4][1];
            maxnum[t % 4][1] = maxnum[t % 4][0];
            maxnum[t % 4][0] = t;
        }
    }
    return 0;
}
