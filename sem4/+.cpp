#include<iostream>
using namespace std;

class Complex {
    int x;
    public:
        Complex() {}
        Complex(int a) : x(a){}
        void display() {
            cout<<"X = "<<x<<endl;
        }
        Complex operator+(Complex);
};

Complex Complex :: operator+ (Complex c1) {
    return Complex(x + c1.x);
}

int main() {
    Complex c1(10), c2(20), c3;

    c3 = c1 + c2;

    c3.display();

    return 0;
}