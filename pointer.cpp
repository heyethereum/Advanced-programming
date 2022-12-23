#include <iostream>
using namespace std;

int main()
{
    int *ip, num = 10;
    void *vp;
    ip = new int;
    *ip = num;
    vp = ip;

    // cout << *vp << endl; // compile error: ‘void*’ is not a pointer-to-object type
    cout << *(static_cast<int *>(vp)) << endl; // 10
    // void* is to pointer to any type
    return 0;
}

// combine 3 steps
// int *p = new int(888)
// at the end of main(), any pointer variable that u "new-ed", use delete
// delete p;

// do not access pointer variable AFTER delete
// if access there will be a memory leak

// when using new, the program is trying to allocate memory