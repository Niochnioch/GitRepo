#include <iostream>
#include "add.cpp"
#include "multiply.cpp"
#include "pow.cpp"
using namespace std;

int main()
{
    cout << Pow(Add(Multiply(2,2),4),3) << endl;
    return 0;
}
