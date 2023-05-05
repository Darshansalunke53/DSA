#include<iostream>
#include<string>

using namespace std;

int * func1(int n)
{
    int *p;

    p=new int[n];

    for(int i=0;i<n;i++)
    {
        p[i]=i+1;
    }

    return p;
    delete [] p;
}

void func(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    a[0]=90;
}

int main()

{
    int a[5]{1,2,3,4,5};
    int *p;

    p=func1(5);

    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;

    func(a,5);

    cout<<endl;
    cout<<a[0];


    return 0;
}