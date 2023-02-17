#include <iostream>

int main() {

    enum operations {
        add = 1,
        substract = 2,
        multiply = 3,
        division = 4
    };

    int operation;
    double x1, x2;
    double result;

    std :: cout << "Add: 1 \tSubstract: 2 \tMultiply: 3 \tDivision: 4" << std::endl;
    std :: cout << "Input x1: ";
    std :: cin >> x1;
    std :: cout << "Input x2: ";
    std :: cin >> x2;
    std :: cout << "Input operation number: ";
    std :: cin >> operation;

    switch (operation) {
        case operations::add:
            result = x1 + x2;
            break;
        case operations::substract:
            result = x1 - x2;
            break;
        case operations::multiply:
            result = x1 * x2;
            break;
        case operations::division:
            result = x1 / x2;
            break;
            }
    std :: cout << "Result: " << result << std::endl;
    std :: cout << operations::division << std::endl;
    return 0;
}