#include <iostream>
#include <string>
struct Date {
    int year{}, month{}, day{};
};
 
struct Person {
    Date dob;
    std::string familyname, firstname;
};
Person a_person{};
Person genius{ { 1879, 3, 14 }, "Einstein", "Albert" };
int main() {
    Person a_person{};
    Person genius{ { 1879, 3, 14 }, "Einstein", "Albert" };
}
