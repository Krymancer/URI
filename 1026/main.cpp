#include <iostream>

int main() {
    int unsigned long a, b;
    while (std::cin >> a >> b) {
        std::cout << (a ^ b) << std::endl;
    }
    return 0;
}