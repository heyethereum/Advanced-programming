#include <iostream>

using namespace std;

void demoPassByReference();
void getDivMod(int, int, int *, int *);

int main()
{
  demoPassByReference();
  return 0;
}

void demoPassByReference()
{
  int a = 19, b = 7, dividend, modulus;
  getDivMod(a, b, &dividend, &modulus);

  cout << endl;
  cout << "At the end of demoPassByReference() !!!" << endl;
  cout << "&a : " << &a << ", a : " << a << endl;
  cout << "&b : " << &b << ", b : " << b << endl;
  cout << "&dividend : " << &dividend << ", dividend : " << dividend << endl;
  cout << "&modulus : " << &modulus << ", modulus : " << modulus << endl;
}

void getDivMod(int num7, int num8, int *addrOne, int *addrTwo)
{
  *addrOne = num7 / num8;
  *addrTwo = num7 % num8;

  cout << endl;
  cout << "At end of getDivMod () !!!" << endl;
  cout << "&num5 : " << &num7 << ", num5 : " << num7 << endl;
  cout << "&num6 : " << &num8 << ", num6 : " << num8 << endl;
  cout << "&addrOne : " << &addrOne << ", addrOne : " << addrOne << endl;
  cout << "&addrTwo : " << &addrTwo << ", addrTwo : " << addrTwo << endl;
}