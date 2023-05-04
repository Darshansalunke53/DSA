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

int main()

{
    Rectangle r;

    cout<<add_value(r);


    return 0;
}