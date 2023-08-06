#include<iostream>
using namespace std;

class Rectangle {
public:
    int length;
    int breath;

    //Default Constructor - No Parameters
    Rectangle() {
        length = 0;
        breath = 0;
    }

    //Paramaterized Constructor
    Rectangle(int x, int y) {
        length = x;
        breath = y;
    }

    //Copy Constructor
    Rectangle(Rectangle& r) {
        length = r.length;
        breath = r.breath;
    }

    ~Rectangle(){
        cout<<"Destructor is Called!"<<endl;
    }

};

int main() {

    Rectangle* r = new Rectangle;
    cout<<r->length<<" "<<r->breath<<endl; // In pointer objects, arrow should be used instead of dot
    delete r; // delete could only be used in pointers.

    Rectangle r2(2, 4);
    cout<<r2.length<<" "<<r2.breath<<endl;

    Rectangle r3(r2);
    cout<<r3.length<<" "<<r3.breath<<endl;

    return 0;
}