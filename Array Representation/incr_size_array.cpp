#include<iostream>
#include<string>

using namespace std;

void PrintArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main()

{
    int *p=nullptr;

    p=new int[5];

    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }

    PrintArray(p,5);

    int *q=nullptr;

    q=new int [10];

    for(int i=0;i<5;i++)
    {
        q[i]=p[i];
    }

    //PrintArray(q,5);

    delete [] p;

    p=q;

    q=nullptr;

    for(int i=5;i<7;i++)
    {
        cin>>p[i];
    }

    PrintArray(p,7);


    return 0;
}