#include <iostream>
#include <string>

int demsonut(int n) {
    int sum = 0;

    // Lặp qua từng chữ số trong số nguyên và cộng vào tổng
    while (n > 0) {
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    // 2132
    // 2
    // 3
    // 1
    // 2

    return sum;
}

bool doixung(int n) {
    int reversed = 0;
    int original = n;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
        std::cout << n << std::endl;
    }
    // 123421
    // 1 -> 1
    // 2 -> 12
    // 4 -> 124
    // 3 -> 1243
    // 2 -> 12432
    // 1 -> 124321
    // đem so sánh 124321 với 123421
    return reversed == original;
}

int main() {
    int number;

    std::cout << "Input: ";
    std::cin >> number;

    if (doixung(number)) {
        std::cout << number << " doi xung." << std::endl;
    } else {
        std::cout << number << " ko doi xung." << std::endl;
    }

    return 0;
}
