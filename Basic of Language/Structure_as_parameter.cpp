#include<iostream>
#include<string>

using namespace std;

struct Rectangle
{
    int a{70};
    int b{90};
};

int add_value(Rectangle s)
{
    int c{};
    c=s.a+s.b;
    
    return c;
    
}

void change_value(Rectangle *s)
{
    s->a=100;
    s->b=200;
}

void swap_value(Rectangle &s)
{
    int temp{};

    temp=s.a;
    s.a=s.b;
    s.b=temp;
}

int main()

{
    Rectangle r;

    cout<<add_value(r)<<endl;

    change_value(&r);

    cout<<r.a<<" "<<r.b<<endl;

    swap_value(r);

    cout<<r.a<<" "<<r.b<<endl;


    return 0;
}