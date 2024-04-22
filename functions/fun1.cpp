#include <iostream>
using namespace std;

void sqr()
{
    for (int i = 1; i <= 5; i++)
    {
        int sum = i * i;
        cout << "Square of " << i << " = " << sum << endl;
    }
}

int main()
{
    sqr();
    return 0;
}