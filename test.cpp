#include <iostream>
#include "add.cpp"
#include "multiply.cpp"
#include "pow.cpp"
using namespace std;

void areEquals(double expected, double got)
{
    if(expected != got)
        cout << "Expected: " << expected << " but got: " << got << endl;
    else
        cout << "Test passed!" << endl;
}

int main()
{
    areEquals(4, Add(2, 2));
    areEquals(6, Multiply(3, 2));
    areEquals(9, Pow(3, 2));
    return 0;
}
