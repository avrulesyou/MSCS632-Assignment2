#include <iostream>
#include <vector>

int calculateSum(const std::vector<int>& arr) {
    int total = 0;
    for (int num : arr) {
        total += num;
    }
    return total;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int result = calculateSum(numbers);
    std::cout << "Sum in C++: " << result << std::endl // <--- Syntax error here
    return 0;
}
