#include <iostream>

template <typename X, typename U = double>

U average(const X& a, const X& b) {
    return (a + b) / U{ 2 };
}
int main() {
    int a = 3, b = 4;
    std::cout << average(a, b) << '\n';
    std::cout << average(3.5, 3.0) << '\n';
    std::cout << average<int>(3.5, 3) << '\n';
    std::cout << average<double>(3.5, 3) << '\n';
} 
