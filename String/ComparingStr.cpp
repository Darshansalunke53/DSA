#include<iostream>
#include<string>

using namespace std;

int main()

{
    string str1="Painter";
    string str2="Painting";

    for(int i=0;i!=str1.length()&&i!=str2.length();i++)
    {
        if(str1[i]==str2[i])
        {
            continue;
        }
        else if(str1[i]>str2[i])
        {
            cout<<str1<<" is big string alphabeticaly";
            break;
        }
        else
        {
            cout<<str2<<" is big string alphabeticaly";
            break;
        }

    }
    cout<<"Both String are equal";
    return 0;
}