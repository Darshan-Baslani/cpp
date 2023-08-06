#include<iostream>
using namespace std;

class Parent {
public:
    Parent() {
        cout<<"Parent Class"<<endl;
    }
};

class Child: public Parent {
public:
    Child() {
        cout<<"Child Class"<<endl;
    }
};

int main() {
    Child chunnu;
    return 0;
}

// There are many types of inheritance, but they are not mentioned here because they are quite obvious.
// Like multiple parent inheritance(One child class inherit multiple parent class)
// Multi level inheritance (parent class -> child class -> grand child class -> great grand child class...)
// Hierarchichal inheritance (there are multiple child class of one parent class)