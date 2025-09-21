// Filename: type_system_cpp.cpp
#include <iostream>
#include <string>

// Overloaded function for integers
void combine(int a, int b) {
    int result = a + b;
    std::cout << "C++ Result (int + int): " << result << std::endl;
}

// Overloaded function for strings
void combine(const std::string& a, const std::string& b) {
    std::string result = a + b;
    std::cout << "C++ Result (string + string): " << result << std::endl;
}

int main() {
    combine(10, 5);
    combine(std::string("Hello, "), std::string("World!"));
    // combine(10, std::string("World!")); // This would cause a compile-time error
    return 0;
}