// 10-throw1.cpp : simple exception demonstration, throw and catch
 
#include <iostream>
#include <exception>
using namespace std;
 
template <typename T>
void getInteger(T& value) {
    cout << "Please enter an integer (0 to throw): ";
    cin >> value;
    if (!value) {
        exception e = exception{};
        throw e;
    }
}
 
int main() {
    long long v{};
    try {
        getInteger(v);
    }
    catch (exception &e) {
        cerr << "Caught exception!\n";
        // return 1;
    }
    cout << "Got value: " << v << '\n';
}