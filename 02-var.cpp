// 02-assign.cpp : assign to local variables
 
#include <iostream>
#include "var_help.cpp"
using namespace std;
// static int kk = 1;
namespace Wonderland {
    auto alice_height_m{ 0.15 };
}
 
namespace VictorianEngland {
    auto alice_height_m{ 0.9 };
}
int test{1};
int main() {
    using namespace VictorianEngland;
    cout << "kk = " << kk << endl;
    cout << "test = " << ::test << endl;
    int test{2};
    cout << "test = " << ::test << endl;
    int i = 1;
    int j(1);
    unsigned k;
    cout << "(1) i = " << i << ", j = " << j << ", k = " << k << '\n';
    i = j;
    j = 3;
    k = -1;
    cout << "(2) i = " << i << ", j = " << j << ", k = " << k << '\n';

    double d = 1.1f;
    cout<<"d = "<<static_cast<int>(d)<<endl;

    int a[]{1'00'00,2,3};
    
    for (auto a : a)
    cout<<"a = "<<a<<endl;

    cout << "Alice\'s height varies between "
    << Wonderland::alice_height_m
    << "m and "
    << VictorianEngland::alice_height_m
    << "m.\n";
}