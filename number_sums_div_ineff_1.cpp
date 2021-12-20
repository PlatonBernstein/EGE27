#include <iostream>
using namespace std;

/*
1. Input array size and content
2. Calculate checksum
*/

int main()
{
    int n, checksum = -1;
    int i, j, s;
    bool checksum_found = false;
    // Ввод размера массива
    std::cin >> n;
    int* x = new int[n];
    // Ввод всех х
    for (i = 0; i < n; i++) {
        std::cin >> x[i];
    }
    return 0;
}
