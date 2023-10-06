#include<iostream>
#include<string>

using namespace std;

int main()

{
    string str="How are   you";
    int world=1;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' '&& str[i-1]!=' ')
        {
            world++;
        }
    }

    cout<<"Number of world are:"<<world;
    
    return 0;
}