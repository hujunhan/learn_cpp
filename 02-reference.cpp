// 02-references.cpp : introducing l-value references
 
#include <iostream>
using namespace std;
 
auto alice_age{ 9 };
 
int main() {
    cout << "Alice\'s age is " << alice_age << '\n';
    auto& alice_age_ref = alice_age;
    alice_age_ref = 10;
    alice_age=9;
    cout << "Alice\'s age is now " << alice_age_ref << '\n';
}