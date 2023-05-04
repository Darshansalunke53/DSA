#include<iostream>
#include<string>

using namespace std;

struct Rectangle
{
    int a{};
    int b{};
};


int main()

{
    Rectangle r;

    r.a=10;
    r.b=50;

    cout<<r.a<<" "<<r.b<<endl;

    Rectangle *p=&r;

    cout<<(*p).a<<endl;
    cout<<p->b<<endl;

    cout<<&r<<" "<<p<<endl;

    Rectangle *p1;

    p1 = new Rectangle;

    p1->a=10;
    p1->b=70;

    cout<<p1->a<<" "<<p1->b;

    delete p1;
    
    return 0;
}