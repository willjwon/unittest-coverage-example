#include <iostream>
#include "function.h"

int main() {
    const auto result1 = add(1, 2);
    const auto result2 = subtract(result1, 1);

    std::cout << result2 << std::endl;

    return 0;
}
