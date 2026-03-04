#include <iostream>

int main() {
    double firstNumber = 0;
    double secondNumber = 0;

    std::cout << "Enter first number: ";
    std::cin >> firstNumber;

    std::cout << "Enter second number: ";
    std::cin >> secondNumber;

    std::cout << "Product: " << (firstNumber * secondNumber) << std::endl;
    return 0;
}
