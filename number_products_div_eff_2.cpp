#include <iostream>

/*
1. Input array size and numbers
2. How many numbers divide by 105?
3. Make a function to calculate count - how many divide by num1 and num2, but not by num3
4. How many numbers divide by 5*7, but not 3; by 3*7, but not 5; by 3*5, but not 7
5. Make a function to calculate count - how many divide by num1 and num2, but not by num3, OR divide by num2 and num3, but not num1
6. How many numbers divide by 3*5 and 5*7; by 3*7 and 7*5; by 3*5 and 5*7
*/


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
}
