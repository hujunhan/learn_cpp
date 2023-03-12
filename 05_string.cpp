#include <iostream>

using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "World";
    s1="";
    s2.clear();
    if (s1.length() == s2.size())
        cout << "s1 and s2 are equal" << endl;
    string s3 = s1 + " " + s2;
    cout << s3 << endl;
    auto ss=s1.substr(5);
    return 0;
}