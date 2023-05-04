#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;

struct Rectangle
{
    int length{10};
    int bradth{};
    char x;             
}r1,r2;

struct Rectangle r4;
int main()

{
    struct Rectangle r5;

    r5.length=100;
    r5.bradth=40;
    r4.bradth=30;
    // r1.length=55;
    cout<<r1.length<<endl;
    cout<<sizeof(r1); //12 bytes because it do a padding it take a bigger number insatde of small
    return 0;
}