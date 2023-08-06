#include<iostream>
using namespace std;

class Encap {
    int x;

    public:
        void set(int y) {
            x = y;
        }

        int get() {
            return x;
        }
};

int main() {

    Encap p1;
    p1.set(5);
    cout<<p1.get()<<endl;

    return 0;
}