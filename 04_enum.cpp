enum Rank : unsigned short { ace = 1, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, none = 99 };

Rank r1{ ace };     // ok, r1 is value of enumeration constant ace (1)
Rank r2{};          // possible problem, r2 has value zero which is not in enumeration set
Rank r3;            // worse, r3 has "random" (uninitialized) value
// Rank r4{ 15 };      // possible problem, r4 has a value not within enumeration set
auto r5 = king;     // ok, r5 is of type Rank (not unsigned short)
int i = seven;      // ok, implicit conversion to integral type