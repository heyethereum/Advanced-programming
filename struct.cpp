#include <iostream>
#include <string>
using namespace std;

int main()
{
    struct Address
    {
        string address;
        int postal;
    };
    struct Student
    {
        int id;
        double gpa;
        string name;
        Address address;
    };

    Student classA[10];

    classA[0].name = "Piggy";
    classA[0].address.address = "SIM Uni";

    cout << "name of first student is: " << classA[0].name << endl;
    cout << "address of first student is: " << classA[0].address.address << endl;

    return 0;
}