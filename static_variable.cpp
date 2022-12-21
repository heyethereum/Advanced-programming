#include <iostream>
using namespace std;

void autoVariable();
void staticVariable();

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        staticVariable();
    }

    cout << "============================================" << endl;
    for (int i = 1; i <= 5; i++)
    {
        autoVariable();
    }
    return 0;
}

void autoVariable()
{
    int x = 10;

    cout << x << endl;

    x += 10;
}

void staticVariable()
{
    static int x = 10;

    cout << x << endl;

    x += 10;
}