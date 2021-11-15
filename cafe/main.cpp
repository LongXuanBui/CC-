#include <iostream>
 #include "add.h"
int add(int x, int y); // needed so main.cpp knows that add() is a function declared elsewhere
 using namespace std;
int main()
{
    cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    cout << sizeof(add(5,6));
    return 0;
}
