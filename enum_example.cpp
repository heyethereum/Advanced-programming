#include <iostream>
using namespace std;

int main()
{
    // enum can be used with typedef
    enum colors
    {
        RED,
        BLUE,
        YELLOW
    };
    colors myColors;

    // another way of declaration
    enum grades
    {
        A,
        B,
        C
    } courseGrades;

    // anonymous enum type declaration
    enum
    {
        FOOTBALL,
        Basketball,
        HOCKEY
    } mySports;

    cout << "colors: " << BLUE << endl;
    cout << "grades: " << A << endl;
    cout << "mysports: " << Basketball << endl;
    return 0;
}