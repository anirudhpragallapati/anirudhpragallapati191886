#include<iostream>
using namespace std;

class operation
{
    int a,b,add,sub,mul;
    float div;
public:
    void get();
    void sum();
    void difference();
    void product();
    void division();
};

inline void operation::get()
{
    cout<<"Enter first value: ";
    cin>>a;
    cout<<"Enter second value: ";
    cin>>b;
}

inline void operation::sum()
{
    add=a+b;
    cout<<"Addition of two Numbers: "<< add <<"\n";
}

inline void operation::difference()
{
    sub=a-b;
    cout<<"Difference of two Numbers: "<< sub <<"\n";
}

inline void operation::product()
{
    mul=a*b;
    cout<<"Product of two Numbers: "<< mul <<"\n";
}

inline void operation::division()
{
    div=a/b;
    cout<<"Division of two Numbers: "<< div <<"\n";
}


int main()
{
    cout<<"Program using Inline Function\n";
    operation s;
    s.get();
    s.sum();
    s.difference();
    s.product();
    s.division();
    return 0;
}