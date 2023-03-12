#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;
 
int main() {
    vector<int> v;
    for (;;) {
        cout << "Please enter a number (99 to quit): ";
        int i{};
        cin >> i;
        if (i == 99) {
            break;
        }
        v.push_back(i);
    }
    set<int> s(begin(v), end(v));
    
    

    sort(begin(v), end(v));
    copy(begin(v), end(v), ostream_iterator<int>(cout, " "));
    cout << '\n';
}