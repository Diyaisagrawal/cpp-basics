#include <iostream>

int main() {
    int value = 42;
    int* ptr = &value;

    std::cout << "Value: " << value << std::endl;
    std::cout << "Address: " << ptr << std::endl;
    std::cout << "Dereferenced value: " << *ptr << std::endl;

    return 0;
}
