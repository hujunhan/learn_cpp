#include <iostream>
#include <greeter/greeter.h>
using namespace std;

int main()
{

  cout << "Hello! World! From Bob"
       << "\n";

  // raw string output test
  cout << 1+R"(
this is
a raw string
  )"<<endl;

  /*
  multi-line comment
  doxygen test
  77 characters
  
  */
  return 0;
}
