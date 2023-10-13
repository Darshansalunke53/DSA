#include<iostream>
#include<string>

using namespace std;

int main()

{
    string str="mom";

    bool flag=true;

    int low=0;
    int hig=str.length()-1;

    while(low<=hig)
    {
        if(str[low]!=str[hig])
        {
            cout<<"String are not palindrome";
            flag=false;
            break;
        }
        low++;
        hig--;
    }

    if(flag)
    {
        cout<<"String is palindrome";
    }

    return 0;
}