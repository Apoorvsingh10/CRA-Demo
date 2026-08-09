#include <iostream>

int main() {

    int scores[5] = {10, 20, 30, 40, 50};
    scores[10] = 100;

    int data[3];
    std::cout << data[0];

    int nums[4] = {1, 2, 3, 4};
    int idx = -1;
    nums[idx] = 99;

    int* ptr = nullptr;
    *ptr = 10;

    int* ptr2 = new int(5);
    delete ptr2;
    *ptr2 = 20;

    int* arr = new int[10];

    int* arr2 = new int[10];
    delete arr2;

    int value = 5;
    if (value = 10) {
        std::cout << "oops";
    }

    int items[5] = {0};
    for (int j = 0; j <= 5; ++j) {
        items[j] = j;
    }

    int a = 10, b = 0;
    int result = a / b;

    int uninit;
    int calc = uninit + 1;

    int k = 0;
    while (k < 10) {
    }

    return 0;
}
