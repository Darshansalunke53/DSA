#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int StringValidation(string str)
{
    for(int i=0;i<str.length();i++)
    {
        if(!(isalnum(str[i])))
        {
            return 0;
        }
    }

    return 1;
}


int main()

{
    string str="Darshan123";

    if(StringValidation(str))
    {
        cout<<"String is valid"<<endl; 
    }
    else
    {
        cout<<"String is not valid"<<endl;
    }

    return 0;
}