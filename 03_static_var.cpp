// 04-static-var.cpp : preserving function state in a static variable
 
#include <iostream>
using namespace std;
 
void f() {
    static int s{1};

    cout << s << '\n';
    ++s;
}

auto get_number() {
    static int s{ 1 };
    int b=2;
    return pair{ s++, b };
    }

int main() {
    f();
    f();
    f();
    auto [a, b] = get_number();
    cout << a << ' ' << b << '\n';
    auto [c, d] = get_number();
    cout << c << ' ' << d << '\n';
}