#include<iostream>
#include<string>

using namespace std;

int main()

{
    int a{9};
    int *p{nullptr};

    p=&a;;

    cout<<&a<<" "<<p<<endl;

    *p=10;

    cout<<a<<" "<<*p<<endl;

    p = new int;

    *p = 10;

    cout<<p<<endl;

    cout<<*p;

    delete p;
    return 0;
}