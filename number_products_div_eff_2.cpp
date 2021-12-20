#include <iostream>

/*
1. Input array size and numbers
2. How many numbers divide by 105?
3. Make a function to calculate count - how many divide by num1 and num2, but not by num3
4. How many numbers divide by 5*7, but not 3; by 3*7, but not 5; by 3*5, but not 7
5. Make a function to calculate count - how many divide by num1 and num2, but not by num3, OR divide by num2 and num3, but not num1
6. How many numbers divide by 3*5 and 5*7; by 3*7 and 7*5; by 3*5 and 5*7
*/

int count_2_1(int* x, int n, int div1, int div2, int div3)
{
    // сколько чисел делится на div1_1 и div1_2 но не делятся на div2_1
    // перемножить на сколько чисел делится на div2_1, но не делится на div1_1 и div1_2
    int cnt12 = 0;
    int cnt3 = 0;
    for (int i = 0; i < n; i++) {
        // сколько чисел делится на первый и второй множитель, но не делится на третий?
        if (x[i] % div1 == 0 and x[i] % div2 == 0 and x[i] % div3 != 0) {
            cnt12++;
        }
        // сколько чисел делится на третий множитель, но не делится на первый или второй?
        if ((x[i] % div1 != 0 and x[i] % div2 != 0) and x[i] % div3 == 0) {
            cnt3++;
        }
    }
    return cnt12 * cnt3;
}

int main()
{
    int n, count;
    int i;
    // Ввод размера массива
    std::cin >> n;
    count = 0;
    int* x = new int[n];
    // Ввод всех х
    for (i = 0; i < n; i++) {
        std::cin >> x[i];
    }
    // 1. Сколько чисел уже делится на 105?
    int div105 = 0;
    for (i = 0; i < n; i++) {
        if (x[i] % 105 == 0) {
            div105++;
        }
    }
    return 0;
}
