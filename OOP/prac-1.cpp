#include<iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breath;

    Rectangle() {
        length = 0;
        breath = 0;
    }

};

int main() {

    Rectangle r;
    cout<<r.length<<" "<<r.breath<<endl;

    return 0;
}