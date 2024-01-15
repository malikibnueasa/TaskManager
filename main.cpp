#include <iostream>
#include "add.h"
#include "subtract.h"

int main() {
    int result_add = add(5, 3);
    int result_subtract = subtract(5, 3);

    std::cout << "Addition: " << result_add << std::endl;
    std::cout << "Subtraction: " << result_subtract << std::endl;

    return 0;
}
