#include <iostream>
#include <string>

using namespace std;
// function prototype before main ()
// function prototype is a way to share functions w/o sharing source
// function prototype to be include in headers
int addThree(int one, int tow, int three);
void addTwoB(int &n1, int &n2, int &n3);

int main()
{
    cout << "hello" << endl;
    int sum = addThree(1, 2, 3);

    cout << "Result: " << sum << endl;

    int a = 2;
    int b = 3;
    int c = 0;
    addTwoB(a, b, c);
    cout << "result for memory reference: " << c << endl;
    return 0;
}
// function after main()
int addThree(int one, int two, int three)
{
    return (one + two + three);
}

// 1. passing by reference can return more than 1 value
// 2. change the actual parameters
// 3. when passing the address would save memory space and time
// advantage is more efficient
// Risks/downside is any assignment to variable in function will directly alter the value of main function
void addTwoB(int &n1, int &n2, int &result)
{
    result = n1 + n2;
}