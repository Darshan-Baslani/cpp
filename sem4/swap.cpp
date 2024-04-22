#include<iostream>
using namespace std;

class Class2;
class Class1 {
    int x;
    public:
        void put_data(int a) {
            x = a;
        }
        void display() {
            cout<<"Class 1 x = "<<x<<endl;
        }
        friend void swap(Class1 &, Class2 &);
};

class Class2{
    int x;
    public:
        void put_data(int a) {
            x = a;
        }
        void display() {
            cout<<"Class 2 x = "<<x<<endl;
        }
        friend void swap(Class1 &, Class2 &);
};

void swap(Class1 &c1, Class2 &c2) {
    int temp = c1.x;
    c1.x = c2.x;
    c2.x = temp;
}

int main() {
    Class1 c1;
    Class2 c2;

    c1.put_data(10);
    c2.put_data(20);
    c1.display();
    c2.display();

    swap(c1, c2);
    c1.display();
    c2.display();

    return 0;
}