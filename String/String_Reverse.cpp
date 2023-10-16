#include<iostream>
#include<string>

using namespace std;

void StrReverseRecursion(string str)
{
    if(str.size()==0)
    {
        return;
    }
    StrReverseRecursion(str.substr(1));
    cout<<str[0];


}

int main()

{
    string str="python";

    // for(int i=str.length()-1;i>=0;i--)
    // {
    //     cout<<str[i];
    // }

    StrReverseRecursion(str); 
    return 0;
}