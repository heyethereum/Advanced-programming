#include <iostream>
using namespace std;

int defaultPara(int = 10, int = 20);

int main()
{
    cout << defaultPara() << endl;
    cout << defaultPara(1, 2) << endl;

    return 0;
}

int defaultPara(int x, int y)
{
    return (x + y);
}
