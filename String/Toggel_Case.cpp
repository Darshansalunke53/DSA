#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main()

{
    char A[]="WElCome";

    for(int i=0;A[i]!='\0';i++)
    {
        if(isupper(A[i]))
        {
            A[i]+=32;
        }
        else if(islower(A[i]))
        {
            A[i]-=32;
        }
    }
    cout<<A;
    return 0;
}