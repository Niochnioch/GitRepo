#include <iostream>
#include "add.cpp"
using namespace std;

void areEquals(double expected, double got)
{
    if(expected != got)
    {
        cout << "Expected: " << expected << " but got: " << got << endl;
    }
    else
    {
        cout << "Test passed!" << endl;
    }
}

int main()
{
    areEquals(4, Add(2, 2));
    return 0;
}
