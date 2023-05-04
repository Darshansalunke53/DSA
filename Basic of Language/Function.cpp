#include<iostream>
#include<string>

using namespace std;

int call_by_value(int x, int y)
{
    int c{};

    c = x+y;
    return c;
}

void call_by_pointer(int *x, int *y)
{
    int temp{};

    temp=*x;
    *x=*y;
    *y=temp;
}

void call_by_reference(int &x, int &y)
{
    int temp{};

    temp=x;
    x=y;
    y=temp;
}

int main()

{
    int a{100},b{90};
    cout<<a<<" "<<b<<endl;

    cout<<call_by_value(a,b)<<endl;

    call_by_pointer(&a,&b);
    cout<<a<<" "<<b<<endl;

    call_by_reference(a,b);
    cout<<a<<" "<<b;
    

    return 0;
}