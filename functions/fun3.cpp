#include<iostream>
using namespace std;

void vote_eligibility(int age)
{
    if(age>18)
    {
        cout<<"Eligible";
    }
    else
    {
        cout<<"Not Eligible";
    }
}

int main()
{
    int age;
    cout<<"Enter you age: "; cin>>age;
    vote_eligibility(age);

    return 0;
}