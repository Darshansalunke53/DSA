#include<iostream>
#include<string>

using namespace std;

int main()

{
    int a{30};
    int &p=a;

    cout<<a<<" "<<p<<endl;
    p++;
    cout<<a<<" "<<p;
    return 0;
}