#include <iostream>

void task1() {
    int a, b;
    std::cout << "task 1:\n";
    std::cin >> a >> b;
    if (10 <= (a + b) && (a + b) <= 20) std::cout << "true\n";
    else std::cout << "false\n";
}

void task2() {
    const int cA = 5;
    const int cB = 10;
    std::cout << "task 2:\n";
    if (cA == 10 && cB ==10) std::cout << "true\n";
    else if ((cA + cB) == 10) std::cout << "true\n";
    else std::cout << "false\n";
}

void task3() {
    std::cout << "task 3:\n";
    std::cout << "Your numbers: ";
    for (int i = 1; i < 51; i++) {
        if ((i % 2) != 0) std::cout << i << " ";
    }
    std::cout << std::endl;
}

void task4() {
    int a;
    std::cout << "task 4:\n";
    std::cin >> a;
    int x = 1;

    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            x = 0;
        }
    }
    if (x) std::cout << "simple number\n";
    else std::cout << "not simple number\n";
}

void task5() {
    int a, iVis = 0;
 m0:   std::cout << "task 5:\n Please enter year:";
    std::cin >> a;
    if (1 > a || a > 3000) goto m0;
    if (!(a % 4)) iVis = 1;
    if (!(a % 100)) iVis = 0;
    if (!(a % 400)) iVis = 1;
    if (iVis) std::cout << "This is a leap year\n";
    else std::cout << "This is not a leap year\n";
}

int main()
{
    task1();
    task2();
    task3();
    task4();
    task5();
    std::cout << "Buy buy World!\n";
}

